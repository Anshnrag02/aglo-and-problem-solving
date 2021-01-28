#include <iostream>
using namespace std;

int main()
{
    int n,key,low=0,hi,mid,flag=1;
    cout<<"enter the number of elements\n";
    cin>>n;
    hi=n;
    int arr[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>key;
    while((mid!=hi||mid!=low))
    {
        mid=(low+hi)/2;
        if(arr[mid]==key)
            break;
        else if(key>arr[mid])
            low=mid+1;
        else
            hi=mid-1;
        
    }
    if(arr[mid]==key)
        cout<<"foud at index "<<mid;
    else
        cout<<"Not found";
}
