/*
This program checks if the character is an alphabet or not.

Conditional operator(?:): Most of the operator is unary(takes single argument) or
binary(takes two argument) wheres conditional operator is ternary.
Which means it can take three operand(or argument).

*/


#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

     /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print alphabet
     * else
     *     print not alphabet
     */
    (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')
    ?printf("\n%c is an alphabet.\n", ch)
    :printf("\n%c is not an alphabet.\n", ch);

    return 0;

}
