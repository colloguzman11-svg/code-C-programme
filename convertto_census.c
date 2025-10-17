/*
Name: Collins Kimani
Reg:  PA106/G/29036/25
Description: c function to convert fahrenheit to degrees
*/
#include<stdio.h>

float convertto_census(float temp);

void main ()
{
	float temp, result;
	
printf("Please enter the temperature in fahrenheit: ");
scanf("%f", &temp);	

result = convertto_census(temp);

printf("Your temperature in degrees celsius is: %.1fC", result);

}

float convertto_census(float temp)

{
	float degrees;
	
	degrees = (temp - 32) * 5/9;
	
	return degrees;
	
}