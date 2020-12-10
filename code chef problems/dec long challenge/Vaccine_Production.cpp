#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  int d1,v1,d2,v2,p;
  cin>>d1>>v1>>d2>>v2>>p;
  int sum=0,i=1;
  while(sum<p){
      if(i>=d1){
          sum+=v1;
      }
      if(i>=d2){
          sum+=v2;
      }
       i++;
  }

  cout<<i-1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


        solve();

}