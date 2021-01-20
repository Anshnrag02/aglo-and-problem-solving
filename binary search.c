/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],low=0,high=n-1,flag=1;
    int mid = (low+high)/2;
    for(int i=0; i<n ; i++)
        scanf("%d",&arr[i]);
    int i;
    scanf("%d",&i);
    while(low!=high)
    {
        if(i>arr[mid])
            low=mid+1;
        else if(i<arr[mid])
            high=mid-1;
        else
            {
                low=mid;
                high=mid;
            }
        
        
        //printf("%d\n",low);printf("%d\n",mid);printf("%d\n",high);
        mid=(high+low)/2;
        
        if(low==high && i==arr[high])
        {
            flag=0;
            break;
        }
    }
    if (flag==0 )
        printf("%d",mid);
    else
        printf("no soln");
}
