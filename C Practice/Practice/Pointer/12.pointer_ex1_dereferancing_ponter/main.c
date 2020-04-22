#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
    int count = 10;
    int x;
    int *pcount;
    pcount = &count; printf("\npcount = %p\n",pcount);
    x = *pcount;

    printf("\ncount = %i, x = %i\n", count,x);
    return 0;
}
