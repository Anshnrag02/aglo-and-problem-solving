bool canplace(int a[][n],int i,int j,int n,int p){
    for(int k=0;k<n;k++){
        if(a[k][j]==p || a[i][k]==p){
            return false;
        }
    }
    int sx=(i/sqrt(n))*sqrt(n),sy=(j/sqrt(n))*sqrt(n);
    for(int k=sx; k<sx+sqrt(n);k++){
        for(int l=sy; l<sy+sqrt(n); l++){
            if(a[k][l]==p){
                return false;
            }
        }
    }
    return true;
}

bool solvesudoku(int a[][9],int i,int j,int n){
    if(i==n){
        return true;
    }
    if(j==n){
        return solvesudoku(a,i+1,0,n);
    }
    
    if(a[i][j]!=0){
        return solvesudoku(a,i,j+1,n);
    }
    
    for(int p=1; p<=n; ++p){
        if(canplace(a,i,j,n,p)){
            a[i][j]=p;
        }
        bool nextspot=solvesudoku(a,i,j+1,n);
        if(nextspot){
            return true;
        }
    }
    a[i][j]==0;
    return false
}
