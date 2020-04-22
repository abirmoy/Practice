#include <stdio.h>
int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+22;
    char charVar = 'F';
    _Bool boolVar = 0;

    printf("Integer Var = %i and %g\n", integerVar, doubleVar);
    printf("Floating Var = %f\n", floatingVar);
    printf("Double Var = %e\n", doubleVar);
    printf("Double another way Var = %g\n", doubleVar);
    printf("Char Var = %c\n", charVar);
    printf("Bool Var = %i", boolVar);

    return 0;
}
