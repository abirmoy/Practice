/*
This program checks is the number entered is even or odd using conditional operator.

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
    int num1;
    printf("Enter a number: ");
    scanf("%f", &num1);

    (num1%2==1)
    ?printf("\nThe number you entered is odd.\n")
    :printf("\nThe number you entered is even.\n");

    return 0;
}
