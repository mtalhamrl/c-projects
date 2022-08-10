#include<stdio.h>
int main()
{
    int selection=1,n,j,fact;
    while(selection!=0)
    {
        printf("Enter a positive integer:");
        scanf("%d",&n);
        fact=1;
        for(j=1;j<=n;j++)
        {
            fact*=j;
        }
        printf("%d != %d\n",n,fact);
        printf("Press 1 to continue, 0 to stop:");
        scanf("%d",&selection);
    }
    return 0;
}
