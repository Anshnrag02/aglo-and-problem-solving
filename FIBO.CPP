#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int a=0,b=1,n,temp;
	scanf("%d",&n);
	while(n--)
	{
		temp=b;
		b=b+a;
		a=temp;
		printf("%d\n",b);
	}
      //	printf("%d\n",sum);
	getch();
}
