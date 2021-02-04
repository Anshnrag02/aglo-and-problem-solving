#include <stdio.h>

int main()
{
    int a[]={6,7,8,10,11,12,13,17,18};
    int prevdiff,diff;
    prevdiff=a[0];
    
    for ( int i = 1 ; i < 9 ; i++ )
    {
        diff=a[i]-i;
        if(prevdiff!=diff)
        {
                for ( int k=0 ; k<diff-prevdiff ; k++ )
                    printf("missing element %d\n",i+prevdiff+k);
            
        }
        prevdiff=diff;
    }

    return 0;
}
