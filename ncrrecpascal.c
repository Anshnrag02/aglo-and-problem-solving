#include <stdio.h>

int ncr(int n,int r)
{
    if (n==r||r==0)
        return 1;
    if(r==1)
        return n;
    return ncr(n-1,r-1)+ncr(n-1,r);
}


int main()
{
    int n=20,r=2;
    r=(n-r>r ? r : n-r);
    printf("%d",ncr(n,r));
    return 0;
}
