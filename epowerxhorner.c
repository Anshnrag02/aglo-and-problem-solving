#include <stdio.h>

float a=1;

float e(int p, int q)
{   
    if(q==0)
        return a;
    a=1+(float)p/q*a;
    return e(p,q-1);
}

int main()
{
    int a=1,b=10;
    printf("%f",e(a,b));

    return 0;
}
