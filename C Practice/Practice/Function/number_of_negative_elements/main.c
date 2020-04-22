/**
 * C program to count total number of negative elements in array
 */

 #include <stdio.h>
 #define MAX_SIZE 100// maximum array size

 int main()
 {
     int arr[MAX_SIZE];// declare array of size 100
     int i, size, count = 0;

     // input size of array
     printf("\nEnter the array size: ");
     scanf("%d", &size);

     // input array elements
     printf("\nInput the elements: ");
     for (i=0; i<size; i++)
     {
        scanf("%d", &arr[i]);
     }


     // count total negative element in array
     for(i=0; i<size; i++)
     {
         // increment count if current element is negative
         if (arr[i]<0)
         {
             count++;
         }
     }

     printf("\nTotal #negative element: %d", count);





     return 0;
 }
