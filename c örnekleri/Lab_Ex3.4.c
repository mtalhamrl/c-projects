#include<stdio.h>
#include<math.h>

double calc_area(double x,double y,double z);

int main()
{
	double area;
	double a,b,c;
	
	printf("Enter the sides of the triangle: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	area=calc_area(a,b,c);
	
	printf("Area of the triangle is %.2lf\n",area);
	
	return 0;
}

double calc_area(double x,double y,double z)
{
	double t_area,s;
	
	s=(x+y+z)/2.0;
	t_area=sqrt(s*(s-x)*(s-y)*(s-z));
	
	return t_area;
}
