/*
Name:John
Reg no:CT100/G/26208/25
Date:5/11/2025
Description:c file named sales.txt
*/

#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fp);  // close file properly
    return 0;
}