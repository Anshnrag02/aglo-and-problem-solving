#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll LINF = 1e18;



void solve() {
   ll n,ans=0;
   vector<ll>v;
   cin>>n;
   for(ll i=0;i<n;i++){
     ll ele;
     cin>>ele;
     auto it=upper_bound(v.begin(),v.end(),ele);
     if(it!=v.end()){
        ans+=v.end()-it;
        v.insert(it,ele);
     }
     else{
         v.push_back(ele);
     }
   }
   cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

        solve();
    
}