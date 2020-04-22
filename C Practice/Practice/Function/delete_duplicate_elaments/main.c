#include <stdio.h>
#define MAX_SIZE 100 // MAXIMUM SIZE OF ARRAY

int main()
{
    int arr[MAX_SIZE]; // DECLARE AN ARRAY OF MAXIMUM SIZE
    int size; // TOTAL NUMBER OF ELEMENTS IN ARRAY
    int i, j, k; // COUTNTER VARIABLE

    // INPUT SIZE OF ARRAY
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    // INPUT ELEMENTS OF THE ARRAY
    printf("\nEnter the elements of the array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // FIND DUPLICATE ELEMENTS IN ARRAY
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // IF ANY DUPLICATE FOUND
            if (arr[i]==arr[j])
            {
                for(k=j; k<size; k++)
                {
                    // DELETE THE CURRENT DUPLICATE ELEMENT
                    arr[k] = arr[k+1];
                }

                // DECREMENT THE SIZE AFTER REMOVING THE ELEMENT
                size--;

                // IF SHIFTING OF ELEMENTS OCCUR THEN DONT INCREMENT
                j--;
            }
        }
    }

    // PRINT ARRAY AFTER DELETING DUPLICATE ELEMENTS
    printf("\nArray elements after removing duplicate elements: ");
    for(i=0; i<size; i++)
    {
        printf("\t%d", arr[i]);
    }

    return 0;
}
