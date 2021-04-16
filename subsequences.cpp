#include <bits/stdc++.h>
using namespace std;

void printer(char *a, int no){
    int i=0;
    while(no>0){
        
        (no&1)?cout<<a[i]:cout<<"";
        i++;
        no=no>>1;
    }
    
}

void subseq(char *a){
    int n=strlen(a);
    int range=(1<<n) - 1;
    for(int i = 0 ; i <= range ; i++){
        printer(a,i);
        cout<<endl;
    }
        
}

int main()
{
    char a[]="fuddu";
    subseq(a);
}
