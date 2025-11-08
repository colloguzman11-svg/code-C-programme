/*
Name : Collins kimani
Reg  :PA106/G/29036/25
descreiption : opening borrowed books file
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_TITLE_LENGTH 100
#define FILENAME "borrowed_books.txt"


int main() {
    FILE *fptr;
    char book_title[MAX_TITLE_LENGTH];
    char choice = 'y';

    

    while (choice == 'y' || choice == 'Y') {
        //opening the file
        fptr = fopen("C:\\Users\\Hp\\OneDrive\\c programs\\borrowedbooks.text", "w");

        if (fptr == NULL) {
            fprintf(stderr, "Error opening file %s\n",FILENAME);
            exit(1); // Exit if file cannot be opened
        }

        printf("\nEnter the title of the borrowed book: ");
        
        if (fgets(book_title, MAX_TITLE_LENGTH, stdin) == NULL) {
            printf("Error reading input.\n");
            fclose(fptr);
            break;
        }

       ;
        book_title[strcspn(book_title, "\n")] = '\0';

        // Write the title to the file
        fprintf(fptr, "%s\n", book_title);

        // Close the file
        fclose(fptr);

       
        printf(" Title \"%s\" has been sucessfully stored in %s.\n",FILENAME);

        printf("\nDo you want to enter another book title? (y/n): ");
       
        scanf(" %c", &choice); 
        
        
        while (getchar() != '\n');
    }

    printf("\nExiting program. Goodbye!\n");
    return 0;
}
