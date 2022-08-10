#include<stdio.h>

float average();

int main()
{
	float ave;
	
	ave=average();
	
	printf("Average of entered values: %.2f",ave);
	
	return 0;
}

float average()
{
	float avg,a,b,c;
	
	printf("Enter three decimal numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	
	avg=(a+b+c)/3.0;
	
	return avg;
}
