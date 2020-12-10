#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll  LINF = 1e18;



void solve() {
   ll n,arr[4];
   cin>>n;
   for(ll i=0;i<n;i++){
     cin>>arr[i];     
   }
   sort(arr,arr+n);

   if(n==1){
       cout<<arr[0]<<endl;
   }
   else if(n==2){
       cout<<max(arr[0],arr[1])<<endl;
   }
   else if(n==3){
       cout<<max(arr[0]+arr[1],arr[2])<<endl;
   }
   else if(n==4){
       ll max1=max(arr[0]+arr[3],arr[2]+arr[1]);
       ll max2=max(arr[0]+arr[1]+arr[2],arr[3]);
       cout<<min(max1,max2)<<endl;
   }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll tc; cin >> tc;
    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
