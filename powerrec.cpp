#include <stdio.h>
//int product=1;

int power(int n,int i)
{
    if(i==0)
        return 1;
    if(i%2==0)
        return power(n*n,i/2);
    else
        return power(n*n,i/2)*n;
}

int main()
{
    int n=2,i=9;
    printf("%d",power(n,i));
    return 0;
}
