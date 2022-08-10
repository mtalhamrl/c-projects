#include<stdio.h>
int main()
{
    int sec=0,h,m;
    printf("Enter the time in seconds: ");
    scanf("%d",&sec);
    while(sec>=0)
    {
                 
        h=sec/3600;
        m =(sec%3600)/60;
        sec=sec-((h*3600)+(m*60));
    	printf("It is %d hr. %d min. %d sec.\n",h,m,sec);
        printf("Enter the time in seconds: ");
        scanf("%d",&sec);
    }
    printf("Bye!!");
    return 0;
    
}
