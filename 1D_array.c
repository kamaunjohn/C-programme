/*
Name:John
Date:27/10/2025
Reg:CT100/G/26208/25
Description:1D array program to store revenue data for
a week and total_revenue
*/

#include<stdio.h>
#define DAYS_IN_WEEK
int main(){
float revenue ([7]);
float total_revenue=0.0;
int average_revenue;

for(float i=0; i<7; i++){
printf("entre revenue for a day:",i+1);
scanf("%f",&revenue);
total_revenue+=revenue[i];
}
average_revenue=total_revenue/DAYS_IN_WEEK

printf("Total weekly revenue:%.2f\n",average_revenue);
return 0;

}