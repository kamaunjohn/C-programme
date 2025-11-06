/*
Name:John
Reg no:CT100/G/26208/25
Date:5/11/2025
Description:c program that allow the librarian to enter books
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); // append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title (use '_' for spaces): ");
    scanf("%s", title);

    fprintf(fp, "%s\n", title);  // write title to file
    printf("Book title successfully stored.\n");

    fclose(fp);  // close the file
    return 0;
}