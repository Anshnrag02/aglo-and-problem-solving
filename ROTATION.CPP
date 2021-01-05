#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int num,rot,count=0,temp;
	cin>>num;
	cin>>rot;
	temp=num;
	while(temp>0)
	{
		temp/=10;
		count++;
	}
	rot=rot%count;
	while(rot--)
	{
		temp=num%10;
		for(int i=0;i<count-1;i++)
		{
			temp*=10;
		}
		num=num/10;
		num=num+temp;
	}
	cout<<num;
	getch();

}
