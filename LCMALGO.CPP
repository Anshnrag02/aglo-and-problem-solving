#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int b=1,x,y,m,n;
	scanf("%d",&y);
	scanf("%d",&x);
	m=x;
	n=y;
	while(1)
	{
		b=x%y;
		x=y;
		if(b==0)
			break;
		y=b;
	}
	printf("%d",m*n/y);
      //	printf("%d\n",sum);
	getch();
}
