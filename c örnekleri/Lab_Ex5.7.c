#include<stdio.h>

int main()
{
	int i=1,sum=0,num;
	double avg;
	
	while(i<=20)
	{
		printf("Enter an integer: ");
		scanf("%d", &num);
		sum=sum+num*num;
		++i;
	}
	
	printf("Total of the squares: %d\n", sum);
	avg=sum/20;
	printf("Average of the squares: %.2lf",avg);
	
	return 0;
}
