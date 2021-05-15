#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    cin>>n;
    int lh[n],rh[n];
    int a[n];
    cin>>a[0];
    lh[0]=0;
    rh[n-1]=0;
    for(int i=1 ; i<n ; ++i){
        cin>>a[i];
        lh[i]=max(lh[i-1],a[i-1]);
        
    }
    for(int i=n-2; i>=0 ; --i){
        rh[i]=max(rh[i+1],a[i+1]);
    }
    int sum=0;
    for(int i=0 ; i<n ; i++){
        if((min(rh[i],lh[i])-a[i])>0)
            sum+=(min(rh[i],lh[i])-a[i]);
    }
    cout<<sum;
    return 0;
}
