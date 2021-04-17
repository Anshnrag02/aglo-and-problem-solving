#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[]={1,2,3,4,3,2,1,7};
    int n=8;
    int b=0;
    for(int i=0; i<n; i++){
        b^=a[i];
    }
    int count = 0;
    while(b>0){
        if(b&1)
            break;
        b=b>>1;
        count++;
    }
    int mask=1<<count;
    int xorsum=0;
    for(int i=0; i<n; i++){
        if(a[i]&mask)
            xorsum^=a[i];
    }
    b=xorsum^b;
    cout<<xorsum<<" "<<b;
}
