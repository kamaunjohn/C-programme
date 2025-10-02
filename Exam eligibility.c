/*
Name:JOHN
Reg no:CT100/G/26208/25
Date:28th sep 2025
Description:c program to check if a student is eligible for final exams
*/

#include<stdio.h>
//main function
int main(){
int attendance;
float marks;


//prompt the user to enter attendance
printf("entre attedance,\n");
scanf("%d",&attendance);

//prompt tha user to enter marks
printf("entre marks,\n");
scanf("%f",&marks);

if (attendance >=75 && marks >=40){
printf("you are eligible for final exams");
}
else{
printf("you are not eligible for final exams");
}

return 0;
}