#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	int n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum*10+(n%10);
		n/=10;
	}
	printf("%d\n",sum);
	getch();
}
