#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
   ll n,d,risk=0,count=0;
   cin>>n>>d;
   for(int i=0;i<n;i++){
       int ele;
       cin>>ele;
       if(ele>=80||ele<=9){
        risk++;
       }
   }
   if(d==1){
       count=n;
   }
   else{
      if(risk%d==0){
       count+=risk/d;
       }
      else{
       count+=((risk/d)+1);
       }
      if((n-risk)%d==0){
       count+=((n-risk)/d);
       }
       else{
       count=count+((n-risk)/d)+1;
       }
   }
  
   cout<<count<<endl;

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