#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[]={1,5,3,4,3,5,6};
    int n=7,min_idx=INT_MAX;
    int idxhash[1000000]={-1};
    for(int i=0; i<n; i++){
        if(idxhash[a[i]]==-1)
            idxhash[a[i]]=i;
        else{
            idxhash[a[i]]=min(idxhash[a[i]],i);
            min_idx=min(min_idx,idxhash[a[i]]);
        }
            
    }
    cout<<a[min_idx];
}
