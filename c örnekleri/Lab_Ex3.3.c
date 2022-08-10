#include<stdio.h>
#include<stdlib.h>
#define PER1 0.10
#define PER2 0.09
#define PER3 0.07

void out_salaries(double salary)
{
	salary=salary+salary*PER1;
	printf("First year salary: %.2f\n",salary);
	salary=salary+salary*PER2;
	printf("Second year salary: %.2f\n",salary);
	salary=salary+salary*PER3;
	printf("Third year salary: %.2f\n",salary);
}

int main(void)
{
	char name[21];
	double current_salary;
	
	printf("Enter your name: ");
	gets(name);
	
	printf("Enter your current salary:");
	scanf("%lf", &current_salary);
	out_salaries(current_salary);
	
	system("PAUSE");
	return 0;
}	
