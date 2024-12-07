#include <stdio.h>

int main() {
    float angle_1, angle_2, angle_3;

    printf("Enter the first angle (in degrees): ");
    scanf("%f", &angle_1);

    printf("Enter the second angle (in degrees): ");
    scanf("%f", &angle_2);

    angle_3 = 180.0 - (angle_1 + angle_2);

    printf("The third angle is: %.2f degrees\n", angle_3);

    return 0;
}
