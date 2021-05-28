#include<bits/stdc++.h>
using namespace std;

void insertatBottom(stack <int>& a, int x){
    if(a.empty())
    {
        a.push(x);
        return;
    }
    int y= a.top();
    a.pop();
    insertatBottom(a,x);
    a.push(y);
}

void reverse(stack <int> &a){
    if(a.size()==0)
        return;
    int buffer=a.top();
    a.pop();
    reverse(a);
    insertatBottom(a,buffer);

}

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

    reverse(a);
        
    // for(int i=0; i<a.size()-1; ++i){
    //     buffer=a.top();
    //     a.pop();
    //     while(a.size()-i){
    //         b.push(a.top());
    //         a.pop();    
    //     }
    //     a.push(buffer);
    //     while(b.size()){
    //         a.push(b.top());
    //         b.pop();    
    //     }
    // }
    while(a.size()){
        cout<<a.top();
        a.pop();
    }
    return 0;
}
