#include<stdio.h>

int main()
{
	int x=1, y=1;
	int i;
	int num;
	
	printf("Enter a poisitive number: ");
	scanf("%d",&num);
	
	printf("Fibonacci numbers: ");
	
	for(i=0;i<num;i++)
	{
		int z;
		z=x+y;
		printf("%d ",x);
		x=y;
		y=z;
	}
	return 0;
}
