#include<iostream.h>
#include<conio.h>
int a=0;
int b=1;
int temp=1;

void fibo(int n)
{
	if(n>0)
	{
		cout<<temp<<endl;
		temp=b+a;
		a=b;
		b=temp;
	}
	fibo(n-1);
}

void main()
{
	clrscr();
	int n=7;
	fibo(n);
	getch();
}