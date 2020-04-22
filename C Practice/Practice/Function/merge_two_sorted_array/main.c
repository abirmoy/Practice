#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int array1[MAX_SIZE], array2[MAX_SIZE], mergeArray[MAX_SIZE*2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;

    // INPUT SIZE OF FIRST ARRAY
    printf("\nEnter the size of first array: ");
    scanf("%d", &size1);

    // INPUT THE ELEMENTS OF FIRST ARRAY
    printf("\nEnter the elements of first array: \n");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &array1[i]);
    }

    // INPUT THE SIZE OF SECOND ARRAY
    printf("\nEnter the size of second array: ");
    scanf("%d", &size2);

    // INPUT THE ELEMENTS OF SECOND ARRAY
    printf("\nEnter the elements of second array: \n");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    mergeSize = size1 + size2;

    // MERGE TWO ARRAY IN ASCENDING ORDER
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        // IF ALL ELEMENTS OF ONE ARRAY IS MERGED TO FINAL ARRAY
        if(index1>=size1 || index2>=size2)
        {
            break;
        }

        if(array1[index1] < array2[index2])
        {
            mergeArray[mergeIndex] = array1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = array2[index2];
            index2++;
        }
    }

    // MERGE REMAINING ARRAY ELEMENTS
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = array1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = array2[index1];
        mergeIndex++;
        index2++;
    }

    // PRINT MERGED ARRAY
    printf("\nArray merged in ascending order: ");
    for(i=0; i<mergeSize; i++)
    {
        printf("\t%d", mergeArray[i]);
    }

    return 0;
}
