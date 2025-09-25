/*
Name:COLLINS KIMANI
Reg No:PA106/G/29036/25
Description:LOANS ENQUIRY
*/
#include<stdio.h>

int main(){
	int age,income;
	
	//prompt user to input
	printf("Please enter your age:");
	scanf("%d", &age);
	
	printf("Please enter your annual income:");
	scanf("%d", &income);
	
	if (age>=21 && income>=21000){
		printf("Congratulations,you quaify for a loan.\n");
	}
	else{
		printf("Unfortunately,we are unable to offer you a loan.\n");
	}
	
	return 0;
}