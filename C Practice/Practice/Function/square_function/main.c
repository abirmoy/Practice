#include <stdio.h>

int cube (int num); //function prototype

int main()
{
    int result, num;

    printf("\nEnter a number: ");//prompt user to input the number to cube
    scanf("%d", &num);

    result = cube(num);//passing num variable to cube function

    printf("\nCube of %d is %d.\n", num, result);

    return 0;
}
//this function takes one parameter and returns the cube of it
int cube(int num)
{
    return num*num*num;
}
