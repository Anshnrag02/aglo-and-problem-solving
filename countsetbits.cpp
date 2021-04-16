#include <stdio.h>

int countbits(int n){
    
    static int count=0;
    if (n==0)
        return count;
    if(n&1==1)
        ++count;
    countbits(n>>1);
    
}

int main()
{
    printf("%d",countbits(11));
}
