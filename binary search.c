#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],low=0,high=n-1;
    int mid = (low+high)/2;
    for(int i=0; i<n ; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&n);
    while(low!=mid && high!=mid)
    {
        if(n>arr[mid])
            low=mid;
        else if(n<arr[mid])
            high=mid;
        else
            {
                low=mid;
                high=mid;
            }
        mid=(high+low)/2;
    }
    printf("%d",mid);
    return 0;
}
