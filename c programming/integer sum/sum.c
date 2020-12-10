#include <stdio.h>

void main(int argc, char *argv[])
{
	int a,b,sum;
	int i;
	
	if(argc<2)
	{
		printf("please use \"prg_name value1 value2 ... \"\n");
		return -1;
	}
	
	sum=0;
	for(i=1; i<argc; i++)
	{
		sum += atoi(argv[i]);
	}
	
	printf("SUM of all values: %d\n",sum);
	
	
}