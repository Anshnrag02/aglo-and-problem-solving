#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

void spiralPrint(int r,int c,int a[R][C],int rbl=0, int tbl=0 ){
    if(rbl>(C-1)/2 || tbl>(R-1)/2)
        return;
    int i=rbl,j=tbl;
    if(rbl==c-1 && tbl== r-1){
        cout<<a[j][i]<<" ";
    }
    else if(rbl==c-1){
        while(j<r)
            cout<<a[j++][i]<<" ";
    }
    else if(tbl==r-1){
        while(i<c)
            cout<<a[j][i++]<<" ";
    }
    else{
        while(i<c-1){
            cout<<a[j][i]<<" ";
            ++i;
        }
        while(j<r-1){
            cout<<a[j][i]<<" ";
            j++;
        }
        while(i>rbl){
            cout<<a[j][i]<<" ";
            i--;
        }
        while(j>tbl){
            cout<<a[j][i]<<" ";
            j--;
        }
    }
    spiralPrint(r-1,c-1,a,rbl+1,tbl+1);
}

int main()
{
    int a[R][C] = { {1,2,3},
                    {4,5,6},
                    {7,8,9} };
     
      // Function Call
    spiralPrint(R, C, a);
    return 0;
}
