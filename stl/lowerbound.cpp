// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
# include<string>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,q,x;vector<int> v;vector<int>::iterator low,up;
    cin>>n;
    for(int i=0;i<n;i++)
     { cin>>x;
       v.push_back(x);
     }
     cin>>q;
     for(int i=0;i<q;i++)
     {
                 cin>>x;
        if(binary_search(v.begin(),v.end(),x)){
            low=lower_bound(v.begin(),v.end(),x);
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else{
            up=upper_bound(v.begin(),v.end(),x);
             cout<<"No "<<(up-v.begin()+1)<<endl;
        }
 
     }       
    return 0;
}
