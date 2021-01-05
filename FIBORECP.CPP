#include<iostream.h>
#include<conio.h>

int fibo(long long int n)
{
	if(n==0)
		return 0;
	if(n==1||n==2)
		return 1;
	return fibo(n-1)+fibo(n-2);
}

void main()
{
	clrscr();
	long long int n=200;
	cout<<fibo(n);
	getch();
}