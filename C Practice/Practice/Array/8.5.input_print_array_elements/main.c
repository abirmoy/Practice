/**
 * C program to read and print elements in an array
 */
#include <stdio.h>
#define MAX_SIZE 100//Maximum size of the array

int main()
{
    int array[MAX_SIZE];// Declare an array of MAX_SIZE
    int i, n;

    //input array size
    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    //Input elements in the array
    printf("\nEnter the elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    //print all elements in array
    printf("\n Elements in array are: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }





    return 0;
}
