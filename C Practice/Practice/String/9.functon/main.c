#include <stdio.h>

int multiply_two_numbers(int x, int y)
{
    int result = x*y;

    //printf("The product of %d multiplied by %d is: %d\n", x,y,result);
    return result;
}

int main()
{
    int result;
    result = multiply_two_numbers(22,2);
    //multiply_two_numbers(2,10);
    printf("result is: %d",result);

    return 0;
}
