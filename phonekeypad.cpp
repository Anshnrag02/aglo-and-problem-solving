#include<bits/stdc++.h>
using namespace std;

string r00f="00ADGJMPTW";


void show(string s, string res="",int i=0){
    if(i==s.length()){
        cout<<res<<endl;
        return;    
    }
    
    char temp;
    temp=r00f[s[i]-'0'];
    show(s,res+temp,i+1);
    temp++;
    show(s,res+temp,i+1);
    temp++;
    show(s,res+temp,i+1);
    temp++;
    if(s[i]=='7' || s[i]=='9'){
        show(s,res+temp,i+1);
    }
    
}

int main(){
    char a[]="666";
    show(a);
}
