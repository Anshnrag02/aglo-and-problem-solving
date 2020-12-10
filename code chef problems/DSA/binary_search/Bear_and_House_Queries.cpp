#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
ll findX(ll x_start,ll x_end, ll y){
    ll ans;
    ll mid =x_start + (x_end - x_start)/2;
    string res;
    while(x_start<=x_end){
        cout<<"? "<<mid<<" "<<y<<endl;
        fflush(stdout);
        cin>>res;
        if(res=="YES"){
            x_start = mid + 1;
            ans = mid;
        }
        else{
            x_end = mid - 1;
        }
        mid =x_start + (x_end - x_start)/2;
    }
    return ans;
}

ll findY(ll x,ll y_start, ll y_end){
    ll ans;
    ll mid =y_start + (y_end-y_start)/2;
    string res;
    while(y_start<=y_end){
        cout<<"? "<<x<<" "<<mid<<endl;
        fflush(stdout);
        cin>>res;
        if(res=="YES"){
            y_start = mid + 1;
            ans = mid;
        }
        else{
            y_end = mid - 1;
        }
        mid =y_start + (y_end-y_start)/2;
    }
    return ans;
}

int main(){
    ll squareX=findX(0,1000,0);
	ll height = findY(0,0,1000);
	ll triangleX = findX(squareX,1000,2*squareX);
	ll side = squareX*2;
	ll tirangleH = height-side;
	ll triangleBase = 2*triangleX;
	ll area = (side*side)+(0.5*tirangleH*triangleBase);
	cout<<"! "<<area<<endl;
	fflush(stdout);
	return 0;
}