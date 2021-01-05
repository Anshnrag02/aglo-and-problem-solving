#include<iostream.h>
#include<conio.h>

int p=1,f=1;

float e(int x, int n)
{
	if(n==0)
		return 1;
	float r;
	r=e(x,n-1);
	f*=n;
	p*=x;
	return r+(float)p/f;
}

void main()
{
	clrscr();
	int x=1,n=1;
	cout<<e(x,n);
	getch();
}