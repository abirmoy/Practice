#include <stdio.h>
#define MAX_SIZE 100 // maximum size of array

int main()
{
    int arr[] = {1,1,2,2,3,4,5,6,7,8,9};
    int freq[MAX_SIZE];
    int i, j, count, size=11;

    // input size of array
    /*printf("/nEnter the size of the array: ");
    scanf("%d", &size);

    // input elements of array
    printf("\nEnter the elements of array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }*/

    // find frequency of each elements
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i]=count;
        }
    }
    // print all unique elements of the array
    printf("\nUnique elements in array are: ");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
