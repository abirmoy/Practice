#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;

    // input array size
    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    // input element of array
    printf("\nEnter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // input element position to delete
    printf("\nEnter the element position to delete: ");
    scanf("%d", &pos);

    // check invalid delete position
    if(pos<0 || pos>size)
    {
        printf("\nInvalid position! Please enter position between 1 to %d\n", size);

    }
    else
    {
        // copy next element value to the current element
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }

        // decrement array size by 1
        size--;
    }

    // print array after deletion
    printf("\nElements of array after deletion are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }


    return 0;
}
