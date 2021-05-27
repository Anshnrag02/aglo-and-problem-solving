#include<bits/stdc++.h>
using namespace std;

int main(){
    int buffer;
    stack<int>a,b;
    for (int i=1 ; i<=4 ; ++i)
    {
        a.push(i);
        b.push(i);
    }    
    while(b.size()){
        cout<<b.top();
        b.pop();
    }
    cout<<endl;
        
    for(int i=0; i<a.size()-1; ++i){
        buffer=a.top();
        a.pop();
        while(a.size()-i){
            b.push(a.top());
            a.pop();    
        }
        a.push(buffer);
        while(b.size()){
            a.push(b.top());
            b.pop();    
        }
    }
    while(a.size()){
        cout<<a.top();
        a.pop();
    }
    return 0;
}
