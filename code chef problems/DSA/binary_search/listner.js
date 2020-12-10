

function startListeners() {
    window.addEventListener('keyup', function(e) {
        scheduleUpdate(1);
        simulationArea.shiftDown = e.shiftKey;
        if (e.keyCode == 16) {
            simulationArea.shiftDown = false;
        }
        if (e.key == "Meta" || e.key == "Control") {
            simulationArea.controlDown = false;
        }
    });

    document.addEventListener('cut', function(e) {

        if(document.activeElement.tagName == "INPUT") return; 

        if(listenToSimulator){
        simulationArea.copyList = simulationArea.multipleObjectSelections.slice();
        if (simulationArea.lastSelected && simulationArea.lastSelected !== simulationArea.root && !simulationArea.copyList.contains(simulationArea.lastSelected)) {
            simulationArea.copyList.push(simulationArea.lastSelected);
        }


        var textToPutOnClipboard = copy(simulationArea.copyList, true);

        // Updated restricted elements
        updateRestrictedElementsInScope();

        localStorage.setItem('clipboardData', textToPutOnClipboard);
        
        e.preventDefault();
        if(textToPutOnClipboard==undefined)
            return;
        if (isIe) {
            window.clipboardData.setData('Text', textToPutOnClipboard);
        } else {
            e.clipboardData.setData('application/json', textToPutOnClipboard);
        }
    }
    });

    document.addEventListener('copy', function(e) {

        if(document.activeElement.tagName == "INPUT") return; 

        if(listenToSimulator){
        simulationArea.copyList = simulationArea.multipleObjectSelections.slice();
        if (simulationArea.lastSelected && simulationArea.lastSelected !== simulationArea.root && !simulationArea.copyList.contains(simulationArea.lastSelected)) {
            simulationArea.copyList.push(simulationArea.lastSelected);
        }

        var textToPutOnClipboard = copy(simulationArea.copyList);

        // Updated restricted elements
        updateRestrictedElementsInScope();

        localStorage.setItem('clipboardData', textToPutOnClipboard);
        e.preventDefault();
        if(textToPutOnClipboard==undefined)
            return;
        if (isIe) {
            window.clipboardData.setData('Text', textToPutOnClipboard);
        } else {
            e.clipboardData.setData('text/plain', textToPutOnClipboard);
        }
    }
    });

    document.addEventListener('paste', function(e) {

        if(document.activeElement.tagName == "INPUT") return; 

        if(listenToSimulator){
        var data;
        if (isIe) {
            data = window.clipboardData.getData('Text');
        } else {
            data = e.clipboardData.getData('application/json');
        }

        paste(data);

        // Updated restricted elements
        updateRestrictedElementsInScope();

        e.preventDefault();
    }
    });

    restrictedElements.forEach((element) => {
        $(`#${element}`).mouseover(() => {
            showRestricted();
        });

        $(`#${element}`).mouseout(() => {
            hideRestricted();
        })
    });
}

var isIe = (navigator.userAgent.toLowerCase().indexOf("msie") != -1 ||
    navigator.userAgent.toLowerCase().indexOf("trident") != -1);


function removeMiniMap() {
    if (lightMode) return;

    if (simulationArea.lastSelected == globalScope.root && simulationArea.mouseDown) return;
    if (lastMiniMapShown + 2000 >= new Date().getTime()) {
        setTimeout(removeMiniMap, lastMiniMapShown + 2000 - new Date().getTime());
        return;
    }
    $('#miniMap').fadeOut('fast');

}

function onMouseMove(e) {
    var rect = simulationArea.canvas.getBoundingClientRect();
    simulationArea.mouseRawX = (e.clientX - rect.left) * DPR;
    simulationArea.mouseRawY = (e.clientY - rect.top) * DPR;
    simulationArea.mouseXf = (simulationArea.mouseRawX - globalScope.ox) / globalScope.scale;
    simulationArea.mouseYf = (simulationArea.mouseRawY - globalScope.oy) / globalScope.scale;
    simulationArea.mouseX = Math.round(simulationArea.mouseXf / unit) * unit;
    simulationArea.mouseY = Math.round(simulationArea.mouseYf / unit) * unit;

    updateCanvas = true;

    if (simulationArea.lastSelected && (simulationArea.mouseDown || simulationArea.lastSelected.newElement)) {
        updateCanvas = true;
        var fn;

        if (simulationArea.lastSelected == globalScope.root) {
            fn = function() {
                updateSelectionsAndPane();
            }
        } else {
            fn = function() {
                if (simulationArea.lastSelected)
                    simulationArea.lastSelected.update();
            };
        }
        scheduleUpdate(0, 20, fn);
    } else {
        scheduleUpdate(0, 200);
    }


}

function onMouseUp(e) {
    createNode =simulationArea.controlDown
    simulationArea.mouseDown = false;

    if (!lightMode) {
        lastMiniMapShown = new Date().getTime();
        setTimeout(removeMiniMap, 2000);
    }

    errorDetected = false;
    updateSimulation = true;
    updatePosition = true;
    updateCanvas = true;
    gridUpdate = true;
    wireToBeChecked = true;

    scheduleUpdate(1);

    for (var i = 0; i < 2; i++) {
        updatePosition = true;
        wireToBeChecked = true;
        update();
    }
    errorDetected = false;
    updateSimulation = true;
    updatePosition = true;
    updateCanvas = true;
    gridUpdate = true;
    wireToBeChecked = true;

    scheduleUpdate(1);
    var rect = simulationArea.canvas.getBoundingClientRect();

    if (!(simulationArea.mouseRawX < 0 || simulationArea.mouseRawY < 0 || simulationArea.mouseRawX > width || simulationArea.mouseRawY > height)) {
        smartDropXX = simulationArea.mouseX + 100; //Math.round(((simulationArea.mouseRawX - globalScope.ox+100) / globalScope.scale) / unit) * unit;
        smartDropYY = simulationArea.mouseY - 50; //Math.round(((simulationArea.mouseRawY - globalScope.oy+100) / globalScope.scale) / unit) * unit;
    }

}

function delete_selected(){

    $("input").blur();
    hideProperties();
    if (simulationArea.lastSelected && !(simulationArea.lastSelected.objectType == "Node" && simulationArea.lastSelected.type != 2)) simulationArea.lastSelected.delete();
    for (var i = 0; i < simulationArea.multipleObjectSelections.length; i++) {
        if (!(simulationArea.multipleObjectSelections[i].objectType == "Node" && simulationArea.multipleObjectSelections[i].type != 2)) simulationArea.multipleObjectSelections[i].cleanDelete();
    }
    simulationArea.multipleObjectSelections = [];

    // Updated restricted elements
    updateRestrictedElementsInScope();
}

function resizeTabs(){
    var $windowsize = $('body').width();
    var $sideBarsize = $('.side').width();
    var $maxwidth = ($windowsize - $sideBarsize);
    $("#tabsBar div").each(function(e){
        $(this).css({ 'max-width': $maxwidth - 30 });
    });
    }

window.addEventListener("resize", resizeTabs);
resizeTabs();

$(function () {
    $('[data-toggle="tooltip"]').tooltip()
});

// direction is only 1 or -1 
function handleZoom(direction) {
    if (globalScope.scale > 0.5 * DPR) {
      changeScale(direction * 0.1 * DPR);
    } else if (globalScope.scale < 4 * DPR) {
      changeScale(direction * 0.1 * DPR);
    }
    gridUpdate = true;
  }
  
  function ZoomIn() {
    handleZoom(1);
  }
  
  function ZoomOut() {
    handleZoom(-1);
  }