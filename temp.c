#include <stdio.h>

int main() {
    float cel, fahren;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    fahren = (9.0 / 5.0) * cel + 32;

    printf("Temperature in Fahrenheit: %.2f°F\n", fahren);
    return 0;
}
