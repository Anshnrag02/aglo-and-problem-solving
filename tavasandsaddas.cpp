#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mult=10;
    int sum=0;
    int count=0;
    while(n){
        if(n%mult==4){
            sum+=1<<count;
        }
        else
            sum+=1<<(count+1);
        count++;
        n/=10;
    }
    cout<<sum;
    return 0;
}
