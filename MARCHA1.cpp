#include <bits/stdc++.h>
using namespace std;

int printer(int *a, int no){
    int i=0,sum=0;
    while(no>0){
        if (no&1)
            sum+=a[i];
        i++;
        no=no>>1;
    }
   // cout<<sum<<endl;
    return sum;
}

void subseq(int *a,int n,int x){
    int range=(1<<n) - 1;
    int b;
    for(int i = 1 ; i <= range ; i++){
        b=printer(a,i);
        if(b==x){
            cout<<"yes";
            break;
        }
    }
        
}

int main()
{
    int a[]={10,15,20,25,30};
    subseq(a,5,65);
}
