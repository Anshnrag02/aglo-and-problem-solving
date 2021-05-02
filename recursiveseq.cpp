// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int N){
        // code here
        static int k=1;
        static int num=1;
        if(N==0)
            return 0;
        int temp=1;
        for(int i=0;i<k;++i){
            temp*=num;
            num++;
        }
        k++;
        return temp+sequence(N-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
