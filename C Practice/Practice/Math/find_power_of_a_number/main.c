/*
C program to find power of any number
*/

#include <stdio.h>
#include <math.h>//in order to use pow() function

int main()
{
    double base, expo, power;

    //inputs two number from user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("\nEnter the expo: ");
    scanf("%lf", &expo);

    //calculates base^expo
    power = pow(base, expo);
    printf("The result is: %.2lf", power);



    return 0;
}
