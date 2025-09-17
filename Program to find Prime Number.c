#include<stdio.h>

int main()
{
	int n, i, isprime;
	printf("Enter a Number =");
	scanf("%d", &n);
	isprime = 1;
	if (n<=1)
	{
		isprime = 0;
	}
	else 
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				isprime = 0;
				break;
			}
		}
	}
	if (isprime == 1)
	printf("%d is prime number", n);
	else 
	printf("%d is NOT a prime number", n);
	return 0;
}