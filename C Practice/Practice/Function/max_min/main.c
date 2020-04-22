#include <stdio.h>
#define MAX_SIZE 100 //Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    //input size of the array
    printf("\nEnter size of the array: ");
    scanf("%d", &size);

    //input array element
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }

    //assume 1st element as maximum and minimum
    max = arr[0];
    min = arr[0];

    //find maximum and minimum for all array elements
    for(i=0; i<size; i++)
    {
        /* If current element is greater than max */
        if (arr[i]>max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }

    /* Print maximum and minimum element */
    printf("\nMax: %d\n", max);
    printf("\nMin: %d \n", min);



    return 0;
}
