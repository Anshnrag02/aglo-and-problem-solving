#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  ll a,b,o1=0,o2=0,e1=0,e2=0;
  cin>>a>>b;
  ll ans=0;
  if(a%2==0){
    o1=e1=a/2;
  }
  else{
    o1=(a/2)+1;
    e1=a-o1;
  }
  if(b%2==0){
    o2=e2=b/2;
  }
  else{
    o2=(b/2)+1;
    e2=b-o2;
  }
  

  cout<<(e1*e2)+(o1*o2)<<endl;
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