#include <stdio.h>
#include <string.h>

int main(void)
{
    int Number = 25;
    int *Num = &Number;//just like creating a new variable, and assigning data into it.

    printf("Address of Number is: %d", Num);
}
