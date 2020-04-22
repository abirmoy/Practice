#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int i, j, count = 0, size;

    // input array size
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    // input array element
    printf("\nEnter the elements of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
    // find all duplicate elements in array
    for (i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // IF DUPLICATE FOUND, INCREMENT COUNT BY 1
            if (arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate found in array = %d", count);
}
