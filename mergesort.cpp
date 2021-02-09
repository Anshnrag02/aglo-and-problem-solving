#include <iostream>
using namespace std;

void merge(int*a,int lo,int mid,int hi){
    
    int b[hi+1];
    int i=lo,j=mid+1,k=lo;
    while(i<=mid && j<=hi)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=hi)
        b[k++]=a[j++];
    for(int q=lo;q<=hi;q++)
        a[q]=b[q];
}

void sort(int *a, int n)

{
    int p;
    for( p=2;p<=n;p=p*2)
    {
        for(int i=0;i+p-1<n;i+=p)
        {
            merge(a,i,i+(p-1)/2,i+p-1);   
        }
        
    }
    if(p/2<n)
        {
            merge(a,0,(p-1)/2,n-1);
        }
}

int main()
{
    int n=9;
    int a[]={8,3,7,4,9,2,6,5,1};
    sort(a,n);
    for(int k=0;k<n;k++)
        cout<<a[k]<<" ";
    return 0;
}
	
