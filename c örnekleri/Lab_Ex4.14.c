#include<stdio.h>
int main()
{
	float gpa;
	int studentID;
	char faculty;
	printf("Enter GPA:");
	scanf("%f",&gpa);
	printf("Enter Student ID:");
	scanf("%d",&studentID);
	printf("Enter Faculty:");
	scanf(" %c",&faculty);
	
	if(faculty=='e'||faculty=='E')
	{
		if(gpa>=2.80)
			printf("Student %d can take the CMPE444 Internet course.\n", studentID);
		else
			printf("Your GPA is low for this course!\n");
	}
	else		
		printf("You are not on Faculty of Engineering!\n");
	return 0;
}
