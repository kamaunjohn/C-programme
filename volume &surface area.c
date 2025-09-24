//c program
/*
Name:John
reg no:CT100/G/26208/25
Description:prompt the student to compute surface area and volume of the cylinder
*/
#include<stdio.h>
#define PI 3.1416

int main(){
float height,volume,surfaceArea,radius;

//ask user for input
printf("entre radius of the cylinder\n");
scanf("%f",&radius);

printf("entre height of the cylinder\n");
scanf("%f",&height);


//calculate volume and surface area;
//volume=PI*radius*radius*height;
//surfaceArea=2*PI*radius*radius+2*PI*radius*height;

//display the results
printf("volume of the cylinder=%.2fm\n³",volume);
printf("surfaceAarea of the cylinder=%.2fm\n²",surfaceArea);

return 0;
}