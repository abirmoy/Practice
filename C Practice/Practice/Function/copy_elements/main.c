#include <stdio.h>
#define MAX_SIZE 100 // maximum array size

int main()
{
    int source[MAX_SIZE], dest[MAX_SIZE];
    int i, size;

    // Input size of the array
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("\nEnter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }

    //copy all elements from source to destination array
    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }

    // print all the elements of the destination
    printf("\nElements of the dest array are: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", dest[i]);
    }


    return 0;

}
