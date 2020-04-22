#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    //input size of array;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    //input array elements
    printf("\nEnter %d elements: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //assuming that there are 0 even and odd elements
    even = 0;
    odd = 0;
    for(i=0; i<size; i++)
    {
        /* If the current element of array is even then increment even count */
        if(arr[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);



    return 0;
}
