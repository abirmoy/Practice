#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    // input the size of the array
    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    // input the elements of the array
    printf("\nEnter the elements of the array: ");
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // input new element and position to insert
    printf("\nEnter element to insert: ");
    scanf("%d", &num);
    printf("\nEnter the element position: ");
    scanf("%d", &pos);

    // check validity of the position of the element
    if(pos>size+1 || pos<=0)
    {
        printf("\nInvalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        // make room for new array element by shifting to right
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        // insert new element at given position and increment size
        arr[pos-1] = num;
        size++;

        // print array after insert operation
        printf("\nArray elements after insertion: ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }


    return 0;
}
