#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,x;vector<int> v;vector<int>::iterator low,up;
  cin>>n;
  for(int i=0;i<n;i++) 
  {
      cin>>x;
      v.push_back(x);
  }
      sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }


   /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}