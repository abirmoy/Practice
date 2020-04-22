#include <stdio.h>
#include <math.h>

int main()
{
    float base, power, result;

    printf("Enter the base: ");
    scanf("%f", &base);
    printf("\nEnter the power of root: ");
    scanf("%f", &power);

    //calculation
    result = pow(base, (1/power));
    printf("Result of root %.2f of %.2f = %.3f", base, power, result);


    return 0;
}
