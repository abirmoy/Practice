/*
Purpose: This program calculate the perimeter of a rectangle.
Author: Abir
Date: February 9, 2019
*/

#include <stdio.h>
int main()
{
    double height, wideth, perimeter, area; //creating variables

    //assigning variable or initiating variable
    perimeter = 0.0;//Its a good practice to initiate all the variable
    height = 10.1;
    wideth = 5.2;
    perimeter = 2 * (height + wideth);
    area = wideth * height;

    printf("Height = %g\nWidth = %.3f\n" , height, wideth);//printing multiple variable in single argument.
    //.3 means 3 digit after decimal
    printf("Wideth = %g\n" , wideth);
    printf("Perimeter = %g\n", perimeter);
    printf("Area = %g\n", area);


    return 0;
}
