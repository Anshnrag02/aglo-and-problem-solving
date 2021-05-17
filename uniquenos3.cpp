#include<iostream>

int finder(int *a, int n)
{
    int table[64]={0};
    for(int i=0; i<n; i++){
        int n=a[i];
        int j=0;
        while(n){
            table[j]+=n&1;
            j++;
            n=n>>1;
        }
    }
    int as=0;
    int k=0;
    for(int i=0;i<64;i++){
        as+=table[i]*(1<<i);
    }
    return as%3;
}

int main(){
    
    int a[]={1,1,1,2,3,3,3,4,4,4};
    return finder(a,10);    
}
