/*
Name : Collins kimani
Reg  :PA106/G/29036/25
descreiption : opening sales file
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "sales.txt"

int main() {
    FILE *file_pointer;
    float transaction_amount;
    float total_sales = 0.0;
    int transaction_count = 0;

    // Open the file
    file_pointer = fopen(FILENAME, "r");

   
    printf("Reading sales transactions from %s...\n", FILENAME);

    // i. Reads all transactions from the file.
   
    while (fscanf(file_pointer, "%f", &transaction_amount) == 1) {
        // ii. Calculates the total sales for the day.
        total_sales += transaction_amount;
        transaction_count++;
    }

    // iii. Ensures the file is properly closed after reading.
    fclose(file_pointer);

    printf("\n--- Daily Sales Summary ---\n");
    if (transaction_count > 0) {
        printf("Total number of transactions: %d\n", transaction_count);
        // Display the total sales
        printf("Total sales for the day: $%.2f\n", total_sales);
    } else {
        printf("No sales data found in the file or file was empty.\n");
    }
    printf("---------------------------\n");

    return 0; // Exit the program with a success code
}



