#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double a, b, c, solution1, solution2;
    printf("enter the Coefficent of x^2: ");
    scanf("%lf", &a);

    printf("enter the coeffiecent of x: ");
    scanf("%lf", &b);

    printf("enter the Constant term: \n");
    scanf("%lf", &c);

    printf("the params are: a=%lf, b=%lf, c=%lf\n", a, b, c);
    
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        solution1 = (-b + sqrt(discriminant)) / (2 * a);
        solution2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and different.\n");
        printf("solution1 = %lf\n", solution1);
        printf("solution2 = %lf\n", solution2);
    } else if (discriminant == 0) {
        solution1 = -b / (2 * a);
        printf("The roots are real and the same.\n");
        printf("solution1 = solution2 = %lf\n", solution1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and different.\n");
        printf("solution1 = %lf + %lfi\n", realPart, imaginaryPart);
        printf("solution2 = %lf - %lfi\n", realPart, imaginaryPart);
    }
    
    return 0;
}