
    document.addEventListener('cut', (e) => {	
        simulationArea.copyList = simulationArea.multipleObjectSelections.slice();	
        if (simulationArea.lastSelected && simulationArea.lastSelected !== simulationArea.root && !simulationArea.copyList.contains(simulationArea.lastSelected)) {	
            simulationArea.copyList.push(simulationArea.lastSelected);	
        }	

        var textToPutOnClipboard = cut(simulationArea.copyList);	
        if (isIe) {	
            window.clipboardData.setData('Text', textToPutOnClipboard);	
        } else {	
            e.clipboardData.setData('text/plain', textToPutOnClipboard);	
        }	
        e.preventDefault();	
    });	
    document.addEventListener('copy', (e) => {	
        simulationArea.copyList = simulationArea.multipleObjectSelections.slice();	
        if (simulationArea.lastSelected && simulationArea.lastSelected !== simulationArea.root && !simulationArea.copyList.contains(simulationArea.lastSelected)) {	
            simulationArea.copyList.push(simulationArea.lastSelected);	
        }	

        var textToPutOnClipboard = copy(simulationArea.copyList);	
        if (isIe) {	
            window.clipboardData.setData('Text', textToPutOnClipboard);	
        } else {	
            e.clipboardData.setData('text/plain', textToPutOnClipboard);	
        }	
        e.preventDefault();	
    });	

    document.addEventListener('paste', (e) => {	
        var data;	
        if (isIe) {	
            data = window.clipboardData.getData('Text');	
        } else {	
            data = e.clipboardData.getData('text/plain');	
        }	

        paste(data);	
        e.preventDefault();	
    });	
