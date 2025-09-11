//program to convert tempreture from fahrenheit to celsius
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter fahrenheit value =");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit-32)*5/9;
	printf("Celsius = %f",celsius);
	return 0;
}