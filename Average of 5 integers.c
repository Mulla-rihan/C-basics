//program to calculate average using arithmetic operators
#include<stdio.h>
int main()
{
	float average;
	int num1,num2,num3,num4,num5;
	printf("Enter 5 integer numbers =");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	average=(num1+num2+num3+num4+num5)/5.0;
	printf("Average of 5 integer numbers =%.2f",average);
	return 0;
}
