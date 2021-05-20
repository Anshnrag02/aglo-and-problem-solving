#include<bits/stdc++.h>
using namespace std;

void bt(string s, int i=0){
    
    if(i==s.length()){
        cout<<s<<endl;
        return;
    }
    for(int j=i; j<s.length(); ++j){
        
        swap(s[i],s[j]);
        bt(s,i+1);
    }
    
}

int main(){
    string a="abc";
    bt(a);
}
