#include <bits/stdc++.h>
using namespace std;

bool isSafe(int a[][9], int i, int j, int n, int key){
    for(int x=0; x<n; x++){
        if(a[x][j]==key || a[i][x]==key)
        return false;
    }
    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (j/rn)*rn;
    for(int k=sx; k<sx+rn;++k){
        for(int l=sy; l<sy+rn; ++l){
            if(a[k][l]==key)
                return false;
        }
    }
    return true;
}

bool Solver(int a[][9], int i , int j , int n){
    
    // base case
    
    if(i==n){
        for(int k =0; k<n ; k++){
            for (int l=0; l<n; ++l){
                cout<<a[k][l]<<" ";
            }    
            cout<< endl;
        }
        return true;
    }
    
    if(j==n){
        return Solver(a,i+1,0,n);
    }
    
    if(a[i][j]!=0){
        return Solver(a,i,j+1,n);
    }
    
    for(int key =1; key<=n ; key++){
        if (isSafe(a,i,j,n,key)){
            a[i][j]=key;
            bool nextsolve=Solver(a,i,j+1,n);
            if(nextsolve){
                return true;
            }
        }
    }
    a[i][j]=0;
    return false;
}


int main(){
    int a[9][9] = {
            {5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9}
    };
    Solver(a,0,0,9);
}
