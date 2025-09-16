#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	printf("Enter a number =");
	scanf("%d", &num1);
	if (num1>0)
	printf("The Given Number Is Positive (+) ");
	else if (num1<0)
	printf("The Given Number Is Negative (-)");
	else
	printf("The Given Number Is Zero (0)");
	return 0;
}