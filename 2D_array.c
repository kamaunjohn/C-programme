/*
Name:John
Date:27/10/2025
Reg:CT100/G/26208/25
Description:2D array program to display occupance status of rooms
*/

#include<stdio.h>
#define FLOORS 5 
#define ROOMS 10
int main(){
int occupancy [FLOORS][ROOMS];
int i,j;
for(i=0; i<FLOORS; i++){
for(j=0;j<ROOMS; j++){
printf("entre occupancy status for FOOR%d,ROOM%d\n");
scanf("%d",&occupancy [i][j]);
}
}
}
printf("\no occupancy status of the hotel:\n");
for(i=0;i<FLOORS; i++){
printf("FLOOR&d:", i+1);
for (j=0;j<ROOMS; j+1);
{
if(occupancy [i][j]==1){
printf("ROOM%d:occupied\n",j+1);
}
else{
printf("ROOM%d:vacant\n",j+1);
}
}

printf("\n");
return 0;

}