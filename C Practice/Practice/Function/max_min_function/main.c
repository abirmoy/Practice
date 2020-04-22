#include <stdio.h>

int max (int num1, int num2);
int min (int num1, int num2);


int main()
{
    int num1, num2;
    printf("\nEnter 2 number: ");
    scanf("%d%d", &num1, &num2);

    printf("\nMax: %d\n", max(num1, num2));
    printf("\nMin: %d\n", min(num1, num2));

    return 0;
}

int max (int num1, int num2)
{
    int c;

    return c = (num1 > num2) ? num1:num2;
}

//prints minimum value
int min (int num1, int num2)
{
    int c;
    return c = (num1 < num2) ? num1:num2; // set c = num1 if num1<num2 else c = num2
}
