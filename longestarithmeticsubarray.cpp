#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxcount=1,count=1;
    cin>>n;
    int a[n],pd=0;
    cin>>a[0];
    for ( int i = 1 ; i<n ; i++ )
    {
        cin>>a[i];
        if(a[i]-a[i-1]!=pd){

            pd=a[i]-a[i-1];
            count=1;
        }
        else
            count++;
        maxcount=max(count,maxcount);
    }    
    cout<<maxcount+1;
    return 0;
}
