#include<bits/stdc++.h>
using namespace std;

int dp[]={0};

int factors(int x) {
    int count=0;
    int i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            count++;
            // Handle the case explained in the 4th
            if(x/i != i) {
                count++;
            }
        }
        i++;
    }
    // Return the list of factors of x
    return count-2;
}

int solve(int n){
    if(dp[n]>0 or n<=5){
        return dp[n];
    }
    int count = 0, a;
    for(int i = n - 1; i>0 ; --i ){
        a=n%i;
        if(a){
            if(i%a==0)
            count++;
        }
    }
    dp[n]=factors(n)+solve(n-1)+count;
    return dp[n];
}

int main(){
    int t; 
    cin>>t;
    dp[3]=3;
    dp[4]=6;
    dp[5]=9;
    while(t--){
        int n; 
        cin>>n;
        int a=solve(n);
        cout<<a<<endl;
    }
}
