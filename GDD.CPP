#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int b=1,x,y;
	scanf("%d",&y);
	scanf("%d",&x);
	while(1)
	{
		b=x%y;
		x=y;
		if(b==0)
			break;
		y=b;
	}
	printf("%d",y);
      //	printf("%d\n",sum);
	getch();
}
