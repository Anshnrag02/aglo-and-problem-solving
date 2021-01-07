#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,t,countlone;
    char temp='l',p;
    cin>>n;
    t=n-1;
    if (n%2==0)
        countlone=0;
    else 
        countlone=1;
    char str[n];
    cin>>str;
    for ( i=0; i<=(n-1)/2;i++ )
    {
        temp='l';
        for(int j=i+1;j<=t;j++)
        {
            if(str[i]==str[j])
                {
                    p=str[j];
                    str[j]=str[t];
                    str[t]=p;
                    t--;
                    temp='a';
                    break;
                }
        }
        if (temp=='l')
        {
            //cout<<"executed"<<i;
            if(i==n/2)
                break;
            countlone--;
            if(n%2!=0)
            {
                    p=str[i];
                    str[i]=str[n/2];
                    str[n/2]=p;
                    i--;
            }
        }
        if(countlone<0)
        {
            break;
        }
    }
   // cout<<countlone;
    if(countlone>=0 || i==(n-1)/2)
        cout<<str;
    else
        cout<<"no soln";

    return 0;
}
