/*
name: collins kimani
reg: PA106/G/29036/25
Description: number guessing
*/
#include <stdio.h>

int main()
{
int attempt =0;
int number;
number=12;

printf("the secret number ranges betweeen 1 and 20");
do{
	printf("\nenter your guess:");
	scanf("%d", &number);
	attempt++;

  if (number>12){
		printf("too high");
	}
	
if (number<12){
		printf("too low");
	}
	
	if (number==12){
		printf("congratulations!\n");
		printf("your made %d attempts", attempt);
	}
}
while(number!=12);
	return 0;
}