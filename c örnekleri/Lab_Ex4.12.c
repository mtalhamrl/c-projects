#include <stdio.h>

int main(void){
	
	char vtype;
	int min;
	float hours, total;
	
	printf("Enter the type of the vehicle: ");
	scanf("%c", &vtype);
	
	printf("Enter the number of minutes for parking: ");
	scanf("%d", &min);
	
	hours = min / 60.0;
	printf("%f\n", hours);
	
	if(vtype == 'C' || vtype == 'c'){
		if(hours<2){
			total = 2.50 * hours;
			printf("Total charge: %.2f$\n", total);
		}else if(hours>=2 && hours<=4){
			total = 4.50 + ((hours-2) * 2.25);
			printf("Total charge: %.2f$\n", total);
		}else{
			total = 8.00 + (2.00 * (hours-4));
			printf("Total charge: %.2f$\n", total);
		}
	}else if(vtype == 'T' || vtype == 't'){
		if(hours<5){
			total = 5.50 * hours;
			printf("Total charge: %.2f$\n", total);
		}else{
			total = 25.00 + (4.50 * (hours-5));
			printf("Total charge: %.2f$\n", total);
		}
	}else{
		printf("Incorrect vehicle type.\n");
	}
	
	return 0;
}
