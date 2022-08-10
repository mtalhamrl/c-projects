#include <stdio.h>

int main()
{
	
	int sanitation = 2000;
	int water;
	int bill;
	
	printf("Enter the amount of water: ");
	scanf("%d", &water);
	
	if(water<25){
		bill = water * 145 + sanitation; 
		printf("This mount you need to pay %d TL.", bill);
	}else if(water>=25 && water<=100){
		bill = 2500 + (120*(water-25)) + sanitation; 
		printf("This mount you need to pay %d TL.", bill);
	}else{
		bill = 3000 + (140*(water-100)) + sanitation; 
		printf("This mount you need to pay %d TL.", bill);
	}
	
	return 0;
}
