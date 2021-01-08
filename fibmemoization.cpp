#include<iostream>

using namespace std;

long long int a[10000];


long long int fibo(long long int n)
{
	
	if(n<=1)
	{
	    a[n]=n;
		return n;
	}
    else
    {
        if(a[n-2]==-1)
            a[n-2]=fibo(n-2);
        if(a[n-1]==-1)
            a[n-1]=fibo(n-1);
        return a[n-1]+a[n-2];
    }
}

int main()
{
    for(int i=0;i<10000;i++)
    {
      a[i]=-1;
    }
    int x=1;
    while(x)
    {
	    long long int n;
	    cin>>n;
	    cout<<fibo(n)<<endl;
	    cin>>x;
    }

}
