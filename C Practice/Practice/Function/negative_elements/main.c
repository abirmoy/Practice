/**
 * C program to print all negative elements in array
 */

 #include <stdio.h>
 #define MAX_SIZE 100

 int main()
 {
     int arr[MAX_SIZE];//declare array of MAX_SIZE
     int i, n;

     //Input size of the array
     printf("\nEnter size of the array: ");
     scanf("%d", &n);

     //input elements in the array
    printf("\nEnter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }

    printf("\nAll negative elements in array are: ");
    for(i=0; i<n; i++)
    {
        //if current array element is negative
        if(arr[i]<0)
        {
            printf("%d\t", arr[i]);
        }
    }


     return 0;
 }
