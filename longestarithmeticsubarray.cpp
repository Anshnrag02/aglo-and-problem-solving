#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a[]={10,7,4,6,8,10,11};
    int n=7,d=INT_MAX;
    int maxlength=2,lensofa=2;
    int leftidx;
    for(int i=1; i<n; i++){
        if(d==a[i]-a[i-1])
            lensofa++;
        else{
            d=a[i]-a[i-1];
            lensofa=2;
        }
        maxlength=max(maxlength,lensofa);
        
    }
    std::cout << maxlength << std::endl;
}
