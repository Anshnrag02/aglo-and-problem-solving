#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    int n,m,suma=0,sumb=0;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n ; ++i){
        cin>>a[i];
        suma+=min(a[i]*c1,c2);
    }
    for(int i=0; i<m ; ++i){
        cin>>b[i];
        sumb+=min(b[i]*c1,c2);
    }
    suma=min(suma,c3);
    sumb=min(sumb,c3);
    cout<<min(c4,suma+sumb);
}
