/*
name collins kimani
reg PA106/G/29036/25
description calculation of water bills
*/

#include <stdio.h> 

int main() {
	int units_consumed;
	float bill; 
	
	//prompt user to enter units consumed;
	printf("please ener units consumed: ");
	scanf("%d",&units_consumed);
	
	if (units_consumed <=30) {
		bill= units_consumed * 20;
		
	}
	else if (units_consumed <=60) {
		bill= units_consumed * 25;
	}
	
	else {
		bill = units_consumed * 30;
	}
	
	printf("Total bill = ksh %.2f\n",bill);
	
	return 0;
}