/*
This program checks if a character is an alphabet,letter or special character
using if else statement
*/

#include <stdio.h>

int main()
{
    char input;

    //prompt user for input
    printf("\nEnter a character: ");
    scanf("%c", &input);

    //calculation
    if(input>='0' && input<='9')
        printf("\n%c is a digit.\n", input);
    else if ((input>='a'||input<='z') && (input>='A'||input<='Z'))
        printf("\n%c is a letter.\n", input);
    else
        printf("\n%c is a special character.\n", input);

    return 0;
}
