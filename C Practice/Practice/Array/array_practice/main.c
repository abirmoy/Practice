#include <stdio.h>

int main()
{
    int aray_values[10] = {0,1,4,9,16};
    int i;

    for (i=5; i<10; i++)
    {
        aray_values[i] = i*i;
        //printf("\n%d\n", aray_values[i]);
    }
    for (i=0; i<10; i++)
    {
        printf("aray_values[%d] = %d\n", i, aray_values[i]);
    }



    return 0;

}
