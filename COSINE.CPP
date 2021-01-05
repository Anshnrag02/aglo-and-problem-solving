#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
double doubfac(long int b)
{
	b+=b;
	double retno=1,i=1;
	while (i<b)
	{
		retno*=(retno+1);
		i++;
	}
	return(retno);
}

double doubpowr(double a,long int b)
{

	double retno=1,i=0;
	while (i<b)
	{
		retno*=a;
		i++;
	}
	retno*=retno;
	return(retno);

}

void main()
{                           c
	clrscr();
	int alpha;
	double cosi,t,sum=0,sumo=0;
	cin>>t;
	long int n=0;
	while(n)
	{
			if(n%2==0)
		{
			alpha=1;
		}
		else
		{
			alpha=-1;
		}

		sumo=sumo+(alpha*doubpowr(t,n)/doubfac(n));

		if(sumo==sum)
		{
			break;
		}
		else
		{
			sum+=sumo;
		}
		n++;
	}
	cout<<sum;
	getch();
}