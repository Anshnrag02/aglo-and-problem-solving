#include<iostream.h>
#include<conio.h>
float s=1;

float e(int x, int n)
{

	if(n==0)
		return s;
	s=1+((float)x/n)*s;
	return e(x,n-1);    //using this in interation not calculation
}

void main()
{
	clrscr();
	int x=1,n=7;
	cout<<e(x,n);
	getch();
}