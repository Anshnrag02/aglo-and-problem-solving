#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   int n;
   vector<int>v;
   cin>>n;
   for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       auto it=upper_bound(v.begin(),v.end(),ele);
       if(it==v.end()) v.push_back(ele);
       else{
           int index=upper_bound(v.begin(),v.end(),ele)-v.begin();
           v[index]=ele;
       }
       
   }
   cout<<v.size()<<" ";
       for(auto x:v){
           cout<<x<<" ";
       }
       cout<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
