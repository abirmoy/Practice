/*
This program prints letters from a to z
using for and while loop
*/

#include <stdio.h>

int main()
{
    //using for loop

    char start = 'a';
    char end = 'z';

    for(;start<=end; start++)
    printf("%c ", start);
    printf("\n");


    //using while loop

    while(start<end)
    {
        printf("%c ", start);
        ++start;
    }



    return 0;
}
