#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, result;
	printf("Enter a number =");
	scanf("%d", &num1);
	for (int i = 1; i<=10 ; i++)
	{
		result = num1 * i;
		printf("%d\n", result);
	}
	return 0;
}