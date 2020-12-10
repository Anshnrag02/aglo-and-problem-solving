#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
  int n,k;
  ll sum=0;
  cin>>n>>k;
  vector<int>arr(n+1);
  int r=n%2==0?-1:1;
  for(int i=1;i<=n;i++){
      if(i%2==0){
        arr[i]=i*r;
      }
      else{
        arr[i]=-i*r;
      }
  }
  int count=0;

  for(int i=1;i<=n;i++){
    sum+=arr[i];
    if(sum>0){
      count++;
    }

  }
if(count>k){
  int i=n-1;
  while(count!=k){
    if(arr[i]>0){
       arr[i]*=-1;
       count--;
       
    }
    i--;
   
  }
}
if(count<k){
  for(int i=n;i>=0&&count!=k;i--){
    if(arr[i]<0){
      arr[i]*=-1;
      count++;
    }
    
  }
}

for(int i=1;i<=n;i++){
  cout<<arr[i]<<' ';
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