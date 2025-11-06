/*
Name:John
Reg no:CT100/G/26208/25
Date:5/11/2025
Description:binary file named result.dat
*/

#include <stdio.h>

struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");  // open in binary read mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Results:\n");
    printf("----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %d\n", s.reg_no);
        printf("Total Marks: %.2f\n\n", s.total_marks);
    }

    fclose(fp);
    return 0;
}