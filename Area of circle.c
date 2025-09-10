#include<stdio.h>
int main()
{
	float radius,area;
	printf("Enter radius of the circle :");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("Radius of circle =%.2f",area);
	return 0;
}