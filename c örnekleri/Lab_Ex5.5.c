#include<stdio.h>

int main()
{
	double x=1.0, y=3.0;
	int i=1;
	double total = 0.0;
	
	while(i<=100)
	{
		total=total+(1/x-1/y);
		x=x+4;
		y+=4;
		++i;
	}
	
	printf("Total is: %lf",total);
	
	return 0;
}
