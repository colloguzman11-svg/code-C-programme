/*
Name: COLLINS KIMANI
Reg No:PA106/G/29036/25
Description: VOLUME AREA
*/
#include<stdio.h>

int main(){
	const float PI = 3.1416;
	float radius,height,volume,surface_area;
	
	 //user input
	printf("Please enter raduis of the cylinder:");
	scanf("%f", &radius);
	printf("Please enter the height of the cylinder:");
	scanf("%f", &height);
	
	//calculate volume and surfce rea
	volume=	PI * radius * radius * height;
	surface_area=2 * PI * radius * radius + 2 * PI * radius * height;
	
	//display results
	printf("Volume of the cylinder is = %.4f\n", volume);
	printf("Surface area of the cylinder = %.4f\n", surface_area);
	
	return 0;
}