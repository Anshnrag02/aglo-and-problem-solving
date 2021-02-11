#include <iostream>
using namespace std;

int main()
{
    int n,k,total_pages=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total_pages+=arr[i];
    }
    int s=arr[n-1],e=total_pages,mid,maxst=0;
    while(s<e)
    {
        int students[1000];
        for ( int i=0; i<1000; i++)
            students[i]=0;
        int j=0;
        mid=(s+e)/2;
        for(int i=0;i<n;i++){
            
            if(students[j]+arr[i]>mid)
            {
                j++;
            }
            students[j]+=arr[i];
            maxst=max(students[j],maxst);
        }
        if(j+1>n){
            s=mid+1;
        }
        else if(j+1<n)
        {
            e=mid-1;
        }
        else{
            if ( mid == maxst)
            {
                cout<<maxst;
                break;
            }
            else
                e=mid-1;
        }
    }
    cout<<maxst;
}
