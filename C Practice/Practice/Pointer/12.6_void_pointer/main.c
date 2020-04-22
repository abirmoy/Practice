#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
    int i = 10;
    float f = 2.34;
    char c = 'k';

    void *vptr;
    vptr = &i;
    printf("Value of i = %d\n", *(int*)vptr);
    vptr = &f;
    printf("Value of f = %.2f\n", *(float*)vptr);
    vptr = &c;
    printf("Value of c = %c\n", *(char*)vptr);



}
