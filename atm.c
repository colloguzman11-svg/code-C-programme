/*
Name: Collins Kimani
Reg:  PA106/G/29036/25
Description: withdrawal of money
*/



#include <stdio.h>

int main() {
    int amount, withdraw;

    
    printf("Enter your account balance: ");
    scanf("%d", &amount);

    
    while (amount > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%d", &withdraw);

       
        if (withdraw > amount) {
            printf("sorry, insufficient funds\n");
        } else {
            amount -= withdraw; 
            printf("your account balance is now at: %d\n", amount);
        }

       
        if (amount == 0) {
            printf("\naccount balance is zero. No further withdrawals allowed.\n");
        }
    }
    return 0;
}