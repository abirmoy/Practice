/*
Author: Abir
Purpose: learn the scanf() function
Date: February 8 2019
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf(" %d %s", &i, str );
    printf("\n You have entered: %d %s\n", i, str);
    return 0;
}
