#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32.0;
    printf("°C is equal to %.2f°F",fahrenheit);

    return 0;
}