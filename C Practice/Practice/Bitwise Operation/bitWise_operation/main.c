#include <stdio.h>
int main()
{
    unsigned int a = 10;//0000 1010
    unsigned int b = 20;//0001 0100
    int result = 0;
    int c, d, e, f;//for future use

    result = a & b;//0000 0000 = 0
    printf("a & b is %d\n", result);

    c = a | b;//0001 1110 = 30
    printf("a | b is %d\n",c);




    return 0;
}
