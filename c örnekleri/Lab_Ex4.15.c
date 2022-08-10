#include <stdio.h>

int main()
{
	
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if(number%2==0){
		printf("%d is an EVEN integer.", number);
	}else{
		printf("%d is an ODD integer.", number);
	}
	
	return 0;
}
