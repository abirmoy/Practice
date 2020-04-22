#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int arr[100], freq[100]; // declare array of maximum size
    int i, j, count, size;

    // input size of array
    printf("\nEnter the Size of array: ");
    scanf("%d", &size);

    // input element of array
    printf("\nEnter the elements of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        // initially initialize frequency to -1
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            // if duplicate element is found
            if (arr[i]==arr[j])
            {
                count++;

                // make sure not to count frequency of same element over again
                freq[j]=0;
            }
        }
        // if frequency of current element is not counted
        if (freq[i] != 0)
        {
            freq[i]=count;
        }
    }
    // print frequency of each element
    printf("\nFrequency of all elements of array: ");
    for(i=0; i<size; i++)
    {
        if (freq[i] != 0)
        {
            printf("\n%d occurs %d times.\n", arr[i], freq[i]);
        }
    }



    return 0;
}
