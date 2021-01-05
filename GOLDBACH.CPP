#include<iostream.h>
#include<conio.h>

int checkprime(int n)
{
	int i=2,flag=1;
	while((i*i<=n) && flag==1)
	{
		if(n%i==0)
			flag=0;
		i++;
	}
	return flag;
}

int nextprime(int n)
{
	while(1)
	{
		n++;
		if(checkprime(n)==1)
		{
			return n;
		}
	}
}

int minprime()
{
	return 2;
}

void main()
{
	clrscr();
	int flag=0,s,n2=2,n3=2;
	cout<<"Enter number"<<endl;
	cin>>s;
	if(s%2==0)
	{
		while(flag==0)
		{
			while(s>(n2+n3))
				n3=nextprime(n3);
			if(s==(n2+n3))
				flag=1;
			if(s<(n2+n3))
			{
				if(n3>n2)
				{
					n3=minprime();
					n2=nextprime(n2);
				}

			}
		}
		cout<<n2<<endl<<n3;
		getch();
	}
	else 
	{
		cout<<s<<" is not an even number";
		getch();
	}
}