/*
This program prints even numbers from 2-n using while loop
*/
#include <stdio.h>

int main()
{
    int i = 2;//starting point of the even numbers
    int n = 0;//counter variable

    printf("Enter n: ");
    scanf("%d",&n);
    printf("\nThe even numbers from 1-%d are: ", n);

    //printing even numbers

    while( i<=n )
    {
        if (i%2==0)
        printf("%d ", i);
        i++;
    }

    //printing odd numbers
    printf("\nThe odd numbers from 1-%d are: ", n);
    for (i=1; i<=n; i++)
    {
        if(i%2==1)
            printf("%d ", i);
    }

    return 0;
}
