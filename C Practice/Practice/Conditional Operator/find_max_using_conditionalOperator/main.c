/*
This program checks the maximum value between two numbers using conditional operator

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
    printf("Please enter two number:");
    scanf("%f%f", &num1,&num2);//taking input from the user via terminal

    /*
     * If num1 > num2 then
     *     assign num1 to max
     * else
     *     assign num2 to max
     */
     if(num1!=num2)
        printf("The biggest number between %.2f and %.2f is: %.2f", num1, num2, max=num1>num2?num1:num2);
     else
        printf("The numbers you have entered are same.\n\n");
    return 0;
}
