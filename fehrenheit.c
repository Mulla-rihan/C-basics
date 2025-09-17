//program to convert tempreture from celsius to fahrenheit
#include<stdio.h>
int main()
{
	float fehrenheit,celsius;
	printf("Enter celsius value = ");
	scanf("%f",&celsius);
	fehrenheit = (celsius * 9/5) + 32;
	printf("Fehrenheit = %.2f",fehrenheit);
	return 0;
}