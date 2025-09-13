#include<stdio.h>
int main()
{
	float num1,num2,result;
	char operater;
	printf("Enter first number =");
	scanf("%f",&num1);
	printf("Enter second number =");
	scanf("%f",&num2);
	printf("Choose an operater (+, -, *, /) = ");
	while ((getchar()) != '\n');
	operater = getchar();
	if (operater == '+')
	{
		result = num1 + num2;
		printf("Result = %.2f",result);
	}
	else if (operater == '-')
	{
		result = num1 - num2;
		printf("Result = %.2f",result);
	}
	else if(operater == '*')
	{
		result = num1 * num2;
		printf("Result = %.2f",result);
	}
	else if (operater == '/')
	{
		if (num2 != 0)
		{
			result = num1/num2;
			printf("Result = %.2f",result);
		}
		else
		{
			printf("You have entered 0!");
		}
	}
	return 0;
}