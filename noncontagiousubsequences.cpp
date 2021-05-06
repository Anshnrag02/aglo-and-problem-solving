#include<bits/stdc++.h>
using namespace std;

void Stringer (string result,int n){
    if(result.length()==n){
        cout<<result<<endl;
        return;
    }
    if(result[result.length()-1]=='0')
    {
       Stringer(result+'1',n);
       Stringer(result+'0',n);
    }
    else
    {
        Stringer (result+'0',n);
    }
}

int main(){
    int n;
    cin>>n;
    string s="1";
    Stringer(s,n);
    s="0";
    Stringer(s,n);
    return 0;
}
