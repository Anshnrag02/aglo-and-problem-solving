#include <iostream>
using namespace std;

int main()
{
    int a[]={12,4,78,131,67,1};
    int n=6;
    int minidx,temp;
    for (int i=0;i<n-1;i++)
    {
        minidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minidx])
                minidx=j;
        }
        temp=a[minidx];
        a[minidx]=a[i];
        a[i]=temp;
    }
    for ( int i = 0; i < n; i++ )
        cout<<a[i]<<" ";
    return 0;
}
