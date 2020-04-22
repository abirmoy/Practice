#include <stdio.h>
int main ()
{
    for(int i =1, j = 2; i <= 5; i++, j += 2)
    {
        printf("%5d\n", i*j);
    }
}
