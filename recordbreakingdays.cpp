#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxcount=1,count=1;
    cin>>n;
    int a[n];
    for ( int i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
    }    
    int max,count_rb=0,pd=a[0];
    for ( int i=0; i<n-1; i++ ){

        if(a[i]>pd&&a[i]>a[i+1]){

            count_rb++;
            pd=a[i];

        }
    }
    cout<<count_rb;
    return 0;
}
