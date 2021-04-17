#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int a[]={1,-6,7,9,-4,-2,-1,5,4};
    int n=9;
    int sum=0,maxsum=INT_MIN;
    for (int i=0; i<n; i++) {
        sum+=a[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;
}
