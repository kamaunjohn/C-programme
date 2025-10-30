/*
Name:John
Date:27/10/2025
Reg:CT100/G/26208/25
Description:2D array program to display occupance status of rooms
*/

    #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  // 3D array for branches, floors, and rooms
    int totalOccupied = 0;

    srand(time(0)); // seed for random numbers

    // Assign random occupancy (1 or 0) and count occupied rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // random 0 or 1
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Display total occupied rooms
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}