#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of array: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
;    }

    //add each array element to sum
    for(i=0; i<n; i++)
    {
        sum = sum+ arr[i];
    }

    printf("\nSum of all elements: %d", sum);



    return 0;
}
