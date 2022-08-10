#include<stdio.h>

int main()
{
	int i;
	int num,sum=0;
	float avg;
	
	for(i=0;i<5;i++)
	{
		printf("Enter an integer number:");
		scanf("%d",&num);
		sum=sum+num*num;
	}
	printf("Total of the squares: %d\n",sum);
	avg=sum/5;
	printf("Average of the squares: %.2f",avg);
	
	return 0;
}
