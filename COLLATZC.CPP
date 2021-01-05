#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	long long int n,count=0;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
			n/=2;
		else
			n=(3*n)+1;
		count++;
	}
	cout<<count;
	getch();
}