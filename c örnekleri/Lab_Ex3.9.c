#include<stdio.h>

int sumOfDigits(int x);

int main()
{
	int num,sum;
	
	printf("Enter three digits integer: ");
	scanf("%d",&num);
	
	sum=sumOfDigits(num);
	
	printf("Sum of integer's digits is %d\n",sum);
	
	return 0;
}

int sumOfDigits(int x)
{
	int sum=0;
	
	while(x>0)
	{
		sum=sum+x%10;
		x=x/10;
	}
	
	return sum;
}
