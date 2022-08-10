#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter three sides of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b && a==c)
		printf("It is equalateral triangle.\n");
	else if(a!=b && a!=c && b!=c)
		printf("It is scalene triangle.\n");
	else
		printf("It is isosceles triangle.\n");
	
	return 0;
}
