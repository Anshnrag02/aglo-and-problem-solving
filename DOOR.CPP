#include<iostream.h>
#include<conio.h>

void main()
{
	   clrscr();
	   char str[1000];
	   float i=0;
	   while(i<1000)
	   {
		str[i]='0';
		i++;
	   }
	   i=0;
	   long int num=0;
	   while(num<1000)
	   {
		while(i<1000)
		{
			if((i+1)%(num+1)==0)
			{
				if (str[i]='0')
					str[i]='1';
				else if (str[i]='1')
					str[i]='0';
			}
			i++;
		}
		num++;
	   }
	   i=0;
	   num=0;
	   while(i<1000)
	   {
		if(str[i]='1');
		{
			num+=(i+1);
			cout<<i+1;
		}
		i++;
	   }
	   cout<<num;
	   getch();