/*
Name:JOHN
Reg no:CT100/G/26208/25
Date:28th sep 2025
Description:c program for local mobile service offers
*/

#include<stdio.h>
//main function
int main(){
int choice;

//prompt the user to enter choice
printf("select data bundles,\n");
 printf("1.100MB@50KES\n");
 printf("2.500MB@200KES\n");
printf("3.1GB@350\n");
printf("4.2GB@600\n");
//prompt the user to enter choice
printf("enter your choice(1-4):");
scanf("%d",&choice);

//display data bundles selected
if(choice== 1){
printf("you selected 100MB,cost=KES50\n");
}
else if(choice==2){
printf("you selected 500MB,cost=KES200\n");
}
else if(choice==3){
printf("you selected 1GB,cost=KES350\n");
}
else if(choice==4){
printf("you selected 2GB,cost=KES600\n");
}
else{
printf("invalid choice\n");
}
return 0;
}