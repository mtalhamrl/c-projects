#include<stdio.h>
int main()
{
	int number, pos_count=0, neg_count=0;
	printf("Enter an integer: ");
	scanf("%d",&number);
	while(number!=12345){
		if(number>0)
				pos_count++;
		if(number<0)
				neg_count++;
		printf("Enter an integer:");
		scanf("%d",&number);
	}
	printf("Number of positive integers: %d\n",pos_count);
	printf("Number of negative integers: %d\n",neg_count);
	return 0;
}
