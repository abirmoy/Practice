/*
This program takes n as input
and prints 0 to n using while loop
*/

#include <stdio.h>

int main()
{
    int n = 0; int i = 0;
    printf("Enter n: ");
    scanf("%d", &n);


    while (i<=n){
        printf("%d ",i);
        i++;
    }


}
