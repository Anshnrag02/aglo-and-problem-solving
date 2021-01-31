
#include <iostream>
using namespace std;

int search(int *arr,int key, int lo,int hi,int mid)
{
    if(lo<hi)
    {
        if(arr[mid]==key)
        {
            cout<<"yellow";
            return mid;
        }
        else if(arr[mid]>key)
            return(arr,key,lo,mid-1,(lo+mid-1)/2);
        else if(arr[mid]>key)
            return(arr,key,mid+1,hi,(hi+mid+1)/2);
    }
    return (-1);
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int mid=5;
    cout<<search(arr,13,0,10,mid);
    return 0;
}
