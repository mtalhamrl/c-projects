#include<stdio.h>

int main()
{
	int gender,age;
	int i=0,worker,female=0,male=0;
	
	printf("Enter number of workers: ");
	scanf("%d",&worker);
	
	do
	{
		printf("Enter the age of the worker: ");
		scanf("%d",&age);
		
		printf("Enter the gender: ");
		scanf("%d",&gender);
		
		if(age<25 && gender==1)
		{
			female++;
		}
		else if(age>55 && gender==0)
		{
			male++;
		}
		else{
		}
		
		i++;
		
	}while(i<worker);
	printf("Number of female workers below age 25 is %d\n",female);
	printf("Number of male workers over the age 55 is %d",male);
	
	return 0;
}
