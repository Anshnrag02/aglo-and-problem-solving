/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//int product=1;

void stardown(int n)
{
    if(n>0)
    {
        stardown(n-1);
        for(int i=0; i<n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void starup(int n)
{
    if(n>0)
    {
        for(int i=0; i<n; i++)
        {
            printf("*");
        }
        printf("\n");
        starup(n-1);
    }
}


int main()
{
    int n=5;
    stardown(n);
    starup(n-1);
    return 0;
}
