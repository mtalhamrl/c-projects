#include<stdio.h>

int main()
{
	int i=1;
	double sale, salary;
	
	while(i<=10)
	{
		printf("Enter the sales in $:");
		scanf("%lf",&sale);
		
		salary = 200+sale*0.09;
		printf("Salary of %d. worker is %.2lf$\n",i,salary);
		++i;
	}
	
	return 0;
}
