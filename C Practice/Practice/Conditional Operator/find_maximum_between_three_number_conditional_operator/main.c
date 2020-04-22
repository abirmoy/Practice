/*
 *This program search for the maximum among three numbers using conditional operator.


Conditional operator(?:): Most of the operator is unary(takes single argument) or
binary(takes two argument) wheres conditional operator is ternary.
Which means it can take three operand(or argument).

max=num1>num2?num1:num2 is equivalent to
 if (num1>num2)
    max = num1;
    else
    max = num2;
 */

#include <stdio.h>

int main()
{
    float num1, num2, num3, max;
    printf("Please enter three numbers that you want to compare: ");
    scanf("%f %f %f",&num1, &num2, &num3);

    /*
     * If num1 > num2 and num1 > num3 then
     *     assign num1 to max
     * else if num2 > num3 then
     *     assign num2 to max
     * else
     *     assign num3 to max
     */
    if(num1!=num2 && num3) //ensures that all the numbers are not same
    {
        max = (num1>num2 && num1>num3)?num1:(num2>num3)?num2:num3;
        printf("\nThe biggest number among %.1f, %.1f and %.1f is: %.2f", num1, num2, num3, max);
    }
    else
        printf("\nThe numbers you have entered are same.");


    return 0;
}
