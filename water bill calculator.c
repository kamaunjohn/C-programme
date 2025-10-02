/*
Name:JOHN
Reg no:CT100/G/26208/25
Date:28th sep 2025
Description:c program to entre the number of water units consumed
*/

#include<stdio.h>
//main function
int main(){
int units;
float bill;


//prompt the user to enter units
printf("entre units,\n");
scanf("%d",&units);

if(units<=30){
bill=units * 20;
}
else if(units<=60){
bill=units * 25;
}
else{bill=units * 30;
}

printf("total water bill:%.2f KES\n",bill);

return 0;
}