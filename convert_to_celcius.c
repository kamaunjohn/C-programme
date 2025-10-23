//function to convert to celcius 

#include <stdio.h>

//function prototype
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

//function declaration
int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(f));
    return 0;
}