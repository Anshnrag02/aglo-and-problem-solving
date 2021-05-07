#include <bits/stdc++.h>
using namespace std;
void permute(string s, string ans)
{
  if(s.size()==0)
  {
    cout<<ans<<endl;
    return;
  }
  for(int i=0;i<s.size();i++)
  {
    permute(s.substr(1),ans+s[0]);
    rotate(s.begin(),s.begin()+1,s.end());
  }
}
int main()
{
  string s;
  cin>>s;
  permute(s,"");
  return 0;
}
