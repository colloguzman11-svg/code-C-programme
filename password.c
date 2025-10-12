/*
name: Collins KImani
Reg:  PA106/G/29036/25
description: password guessing
*/
#include <stdio.h>

int main()
{
	int password;
	int attempt = 0;
	password = 1234;
	
	do{
	printf(" \nenter your password: ");	
	scanf("%d", &password);
	attempt++;
	
	if (password == 1234){
		printf("acess granted");
	}
		
	} while(password!=1234);
	
	return 0;
}