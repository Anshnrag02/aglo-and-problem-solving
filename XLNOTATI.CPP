#include<iostream.h>
#include <conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
	clrscr();
	char str[100];
	gets(str);
	int i=0,sum=0,temp;
	while(str[i]!=0)
	{
		temp=((int)str[i]-64);
		sum=sum+(pow(26,(strlen(str)-ic-1))*temp);
		i++;
	}
	cout<<sum;
	getch();
}
