#include <stdio.h>
#include <stdbool.h>

//declaring function prototype
int iseven(int a);


int main()
{   int num;

    //prompt user input
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\n%d is: %d", num, iseven(num));

    return 0;
}

//this function checks if a number is even or odd and prints it
int iseven(int a)
{
    int c;
    return c = (a%2==0) ? true:false; // C is Even(represented by 1)if a%2=0, Odd otherwise
}
