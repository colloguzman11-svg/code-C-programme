/*
Name: Collins Kimani Kinyanjui
Reg: PA106/G/29036/25
Description: 3Darray
*/
#include <stdio.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("=== Multiple Branches (3D Array) ===\n");
    printf("Enter 1 for occupied and 0 for vacant rooms.\n");

    for (int branch = 0; branch < 3; branch++) {
        printf("\n--- Branch %d ---\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            printf("\nFloor %d:\n", floor + 1);
            for (int room = 0; room < 10; room++) {
                printf("Enter status for room %d: ", room + 1);
                scanf("%d", &chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}