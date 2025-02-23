#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Fahrenheit you want to convert: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    return 0;
}
