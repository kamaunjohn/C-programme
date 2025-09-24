//c program
/*
Name:John
reg no:CT100/G/26208/25
Description:prompt the student to entre the bank loan qualification
*/
#include<stdio.h>

int main() {
int age;
int income;

printf("entre your age: ");
scanf("%d",&age);

printf("entre your annual income in sh: ");
scanf("%f",&income);

if(age>=21 && income>=21000) {
printf("congratulations,you qualify for the loan ");
printf("sorry,we are not able to offer loan at this time ");
}

return 0;
}



