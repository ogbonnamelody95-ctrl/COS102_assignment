#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("======================================\n");
    printf("   RIGHT-ANGLED TRIANGLE CHECKER      \n");
    printf("======================================\n\n");
    
    // Prompt user for input
    printf("Enter the first angle (in degrees): ");
    if (scanf("%f", &angle1) != 1) {
        printf("[Error] Invalid input detected.\n");
        return 1;
    }

    printf("Enter the second angle (in degrees): ");
    if (scanf("%f", &angle2) != 1) {
        printf("[Error] Invalid input detected.\n");
        return 1;
    }

    // Input validation for a valid triangle
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("\n[Error] Invalid angles! Sum of two angles must be between 0 and 180 degrees.\n");
        return 1;
    }

    // Calculate the remaining angle
    angle3 = 180.0f - (angle1 + angle2);
    printf("\nCalculated Third Angle: %.2f degrees\n", angle3);

    // Determine if it is a right-angled triangle
    if (angle1 == 90.0f || angle2 == 90.0f || angle3 == 90.0f) {
        printf("Result: This IS a right-angled triangle.\n");
    } else {
        printf("Result: This is NOT a right-angled triangle.\n");
    }

    return 0;
}