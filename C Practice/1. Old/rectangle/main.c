/* In this program we gonna calculate the
perimeter and the area of a rectangle */


#include <stdio.h>

int main()
{
    // declaring variable
    double height, width, preimeter, area;

height = 10.0;
width = 5.0;
preimeter = 2.0*(height + width);
area = height * width;

//input variable
printf("The Perimeter is: %e\n The area is: %e\n", preimeter, area);
return 0;

}

