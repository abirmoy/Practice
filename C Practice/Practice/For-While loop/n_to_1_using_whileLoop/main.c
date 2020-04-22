/*
This program prints integers from n-0
*/


#include <stdio.h>

int main()
{
    unsigned int i;
    printf("Please enter a positive integer: ");
    scanf("%d", &i);


    while (i>0)
    {
        printf("%d ", i);
        i--;
    }
}
