#include <iostream>
 
using namespace std;
 
int main() {
    int a, b,c,n,k=1,kmax=0;
    cin >> n >> a;
    if(n==1){
        cout<<1;
        return 0;
    }
    cin >> b;
    if(a!=b) k++;
    kmax=max(k,kmax);
    while(cin>>c){
        if((a<b && b>c)||(a>b && b<c)){
            k++;
        }
        else{
            kmax=max(k,kmax);
            k=1;
            if(b!=c) k++;
        }
        a=b;
        b=c;
        kmax=max(k,kmax);
    }
    cout<<kmax;
    return 0;
}
