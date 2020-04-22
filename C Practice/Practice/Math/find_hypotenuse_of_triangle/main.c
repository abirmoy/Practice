/*
C program to find hypotenuse of triangle
*/

#include <stdio.h>
#include <math.h>//in order to use pow() and sqrt() function

int main()
{


    double a,b,c;
    printf("Enter land: ");
    scanf("%lf",&a);
    printf("Enter lombo: ");
    scanf("%lf",&b);

    c = (sqrt(pow(a,2)+pow(b,2)));//hypotenuse of a triangle is a^2+b^2=c^2;so c = sqrt(a^2+b^2)
    printf("The hypotenuse of the triangle is = %.2lf",c);

    return 0;
}
