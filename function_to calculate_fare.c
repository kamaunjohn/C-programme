//function to calculate fare 

#include <stdio.h>

//function prototype
float calculateFare(float distance) {
    return distance * 50;
}

//function declaration
int main() {
    float distance;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}