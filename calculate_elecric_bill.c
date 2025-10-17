/*
Name: Collins Kimani
Reg:  PA106/G/29036/25
Description: c function for elecric bill
*/
#include<stdio.h>

float calculate_electric_bill(float units);
void main()

{
	float bill, units;
printf("Enter the number of units: ");
scanf("%f", &units);

bill = calculate_electric_bill(units);
 
 printf("your bill is: %.2f ", bill);
	
	
}

float calculate_electric_bill(float units)
{
	float total_amount;
if (units<=100){
	total_amount =(units * 10);
}
 else if (units<=200) {
	total_amount = (100 *10) + ((units-100) * 15);
} 
else if(units>200){
total_amount = (100 * 10) + (100 * 15) + ((units-200) * 20);	
}
return total_amount;	
	
}