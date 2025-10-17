/*
Name: Collins Kimani
Reg:  PA106/G/29036/25
Description: c function to calculate fare
*/
#include<stdio.h>

float calculate_fare(float distance);

void main()
{
	float distance, bill;
	
printf(" Enter the  distance travelled in Km: ");	
scanf("%f", &distance);

bill = calculate_fare(distance);

printf("The fare is: ksh%.2f", bill);
	
}
float calculate_fare(float distance)
{
	float fare;
	
	fare = distance * 50;
	
	return fare;
}