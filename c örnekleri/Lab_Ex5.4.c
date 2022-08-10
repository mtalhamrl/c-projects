#include<stdio.h>
#include<stdlib.h>

int main()
{
	int empno, educode, years;
	double salary;
	
	printf("Enter employee number:");
	scanf("%d", &empno);
	
	while(empno>0)
	{
		printf("Enter education code: ");
		scanf("%d", &educode);
		
		switch(educode)
		{
			case 1: printf("Numbers of years worked: ");
					scanf("%d",&years);
					salary=600;
					if(years>3)
					{
						salary=600+600*(years-3)*0.04;
						printf("Salary is: %.2f\n\n",salary);
										}					
					else
					{
						printf("Salary is: %.2f\n\n",salary);
					}
					break;
			case 2: printf("Numbers of years worked: ");
					scanf("%d",&years);
					salary=1000;
					if(years>3)
					{
						salary=1000+1000*(years-3)*0.06;
						printf("Salary is: %.2f\n\n",salary);
					}
					else
					{
						printf("Salary is: %.2f\n\n",salary);
					}
					break;
			default:
				printf("Incorrect education code!!!\n");
				break;
		}
		
		printf("Enter employee number:");
		scanf("%d", &empno);
	
	}
		system("pause");
		return 0;
}
