// Program to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h> // Needed for sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2, real, imaginary;

    // Inputing coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating discriminant
    discriminant = b*b - 4*a*c;

    // Checking the discriminant value to determine the type of roots
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2*a);
        root2 = -b / (2*a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        // Complex roots
        real = -b / (2*a);
        imaginary = sqrt(-discriminant) / (2*a);
        printf("The roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
    }
    return 0;
}