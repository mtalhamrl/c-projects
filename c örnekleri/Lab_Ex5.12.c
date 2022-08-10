#include<stdio.h>
#include<math.h>

int main()
{
	int num,i;
	float result;
	
	for(i=0;i<10;i++)
	{
		printf("Enter an integer: ");
		scanf("%d",&num);
		
		if(num<0)
			result=pow(2,num);
		else
			result=pow(num,3);
		
		printf("Function value: %f\n",result);
	}
	
	return 0;
}
