/*


This program takes three numbers as user input and prints the large one.
Using if else statement
if(expression)
statement
else
statement
*/

#include <stdio.h>

int main()
{
    double num1, num2, num3, max;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);//take user input in order to compare

    /*
    calculation
    if num1>num2 & num1>num3
        max = num
        else
        {
        if num2>num1 & num2>num3
            max = num2
            else
            max = num3
        }
        print max
    */
     if(num1!=num2 && num3)
     {
         if (num1>num2 && num1>num3)
        max = num1;
    else
    {
        if(num2>num1 && num2>num3)
            max = num2;
        else
            max = num3;
    }
    printf("\nLargest number among them is: %.1lf\n", max);
     }
     else
        printf("\nAll the numbers are same.\n");


    return 0;
}
