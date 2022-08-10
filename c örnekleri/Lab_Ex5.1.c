#include<stdio.h>

int main()
{
	int i, c_size, mt1, mt2, final;
	double w_total;
	
	i=1;
	printf("How many students are there in the class?");
	scanf(" %d", &c_size);
	
	while(i<=c_size)
	{
		printf("Enter mt1, mt2 and final grades(out of 100):");
		scanf("%d%d%d",&mt1,&mt2,&final);
		
		w_total=0.25*(mt1+mt2)+0.50*final;
		
		if(w_total<60)
		{
			printf("Total mark: %5.1f, FAIL\n",w_total);
		}
		else
		{
			printf("Total mark: %5.1f, PASS\n",w_total);
		}
		++i;
	}
	return 0;
}
