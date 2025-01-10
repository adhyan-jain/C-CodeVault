// Program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, root1, root2;
    printf("Enter the coefficients a, b, c of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d=sqrt(b*b-4*a*c);
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("Root 1 = %d\n", root1);
    printf("Root 2 = %d", root2);
    return 0;
}