//Nested_for_loop-multiplication table
#include<stdio.h>
int main(){
	int i,j;
	printf("%2c|",' ');
	for(i=1;i<=10;i++){
		//first row begins with the numbers
		printf("%4d",i);
    }
    printf("\n--------------------------------------------\n");
	for(i=1;i<=10;i++){
		printf("%2d|",i);//at the beginning of each row put value i
		for(j=1;j<=10;j++)
			printf("%4d",i*j);
		printf("\n");
	}
	return 0;
}
