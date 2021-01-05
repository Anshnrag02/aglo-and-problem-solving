#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	long int m=3,n=6,temp=1;
	while(n>1)
	{
		if(n%2!=0)
			temp*=m;
		m*=m;
		n/=2;
		//cout<<m<<endl<<n<<endl<<temp<<endl;

	}
	cout<<m*temp;
	getch();
}