/**
 * C program to find diameter, circumference and area of a circle using functions
 */


#include <stdio.h>
#define PI 3.1416

//prototype of functions
int circle_diameter (int radius);
float circle_circumference (int radius);
float circle_area (int radius);


int main()
{
    int radius;

    //prompt for user input
    printf("\nEnter the radius of you circle: ");
    scanf("%d", &radius);

    printf("\nDiameter: %d.\n", circle_diameter(radius));
    printf("\nCircumference: %.2f\n", circle_circumference(radius));
    printf("\nArea: %.2f\n", circle_area(radius));


    return 0;
}

//this function take radius of the circle and return its diameter
int circle_diameter (int radius)
{
    return 2*radius; //diameter  = 2r
}

//this function takes radius of the circle and returns its circumference
float circle_circumference (int radius)
{
    return 2*PI*radius; // circumference = 2pi
}

//this function takes radius of the circle and returns its area
float circle_area (int radius)
{
    return (PI*(radius*radius));
}
