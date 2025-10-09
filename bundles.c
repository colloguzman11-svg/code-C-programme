
/*
Name: collins kimani
Reg: PA106/G/29036/25
Description: programe for subscription of data bundles data bundles 

*/


#include <stdio.h> 

int main() {
	int choice;
	
	//table of choices
	printf("Mobile data bundles\n");
	printf("1.   100MB    ksh50\n");
	printf("2.   500MB    ksh200\n");
	printf("3.   1GB      ksh350\n");
	printf("4.   2GB     ksh600\n");
	
	//prompt user to enter choice 
	printf("Enter your choice(1-4):  ");
	scanf("%d",&choice);
	
	//switch statement
	switch(choice) {
	case 1:
    	printf("You selected 100MB. cost = ksh50.\n");
    	break;
	
	case 2:
		printf("You selected 500MB. cost = ksh200.\n");
		break;
	
	case 3: 
		printf("You selected 1GB. cost = ksh350.\n");
		break;
	
    case 4:
        printf("You selected 2GB. cost = ksh600.\n");
        break;
    default:
        printf("Invalid  choice !! please enter a number between 1 and 4.\n");
	}
        
        return 0;
}
			
