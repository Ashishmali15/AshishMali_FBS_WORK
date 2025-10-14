#include<stdio.h>
float area();
int main()
{
	float res;
	res=area();
	return 0;
	
}
float area()
{
	float r,area;
	printf("Enter the radius of circle= ");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("area of circle is= %f",area); 
	
	
}