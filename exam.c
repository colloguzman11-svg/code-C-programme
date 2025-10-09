/*
name: collins kimani
reg: PA106/G/29036/25
description: exam eligibility
*/
#include<stdio.h>

int main()
{
int attedance,marks;

printf("enter your attendance rate: ");
scanf("%d", &attedance);

printf("enter your average marks: ");	
scanf("%d", &marks);

if (marks>=40 && attedance>=75){
	printf("you are eligible for exam");
} else {printf("not eligible for the exam");}
	return 0;
}