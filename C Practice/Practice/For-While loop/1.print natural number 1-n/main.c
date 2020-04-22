/*
this program take value of n as
input and prints all the  natural
value of 1 to n
*/

#include <stdio.h>

int main()
{
    int n = 0;

    printf("\nEnter the highest number you want to be printed: ");
    scanf("%d",&n);

    for(int i = 0; i<= n; ++i){

            printf("%d ", i);
    }

    return 0;



}
