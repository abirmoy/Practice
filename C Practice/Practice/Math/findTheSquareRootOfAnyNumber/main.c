#include <stdio.h>
#include <math.h>

int main()
{
    double base, root_ex, root;

    //input two numbers
    printf("Enter the base: ");
    scanf("%lf", &base);


    //calculates square root value
    root = sqrt(base);
    printf("Square root of %.2lf = %.2lf", base, root);

    return 0;
}
