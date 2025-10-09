/*
Name:John
reg no:CT100/G/26208/25
description:a program to guess a number between 1-20
*/

# include<stdio.h>
int main(){
int guess,number=15,attempts=0;
printf("welcome to the number guessing game\n");
printf("i have selected numbers between 1-20\n");
printf("can you guess what it is?");
do{
printf("entre your guess\n");
scanf("%d",&guess);
attempts++;
if(guess<number){
printf("too low!try again\n");
}
else if(guess>number){
printf("too high!try again\n");
}
else{
printf("congratulations! you guessed the number");
}

}while(guess!=number);
    return 0;
}