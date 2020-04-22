#include <stdio.h>
int main()
{
    int grades[10];//Array storing 10 values
    int count = 10;//Number of values to be read
    long sum = 0;//Sum of the numbers
    float average = 0.0f;//Average of the numbers



    //Read the 10 numbers to be averaged
    for(int i = 0; i < count; ++i)
    {
        printf("\nEnter the ten grades%2u: ", i+1);//prompt for the input
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    average = (float)sum/count;
    printf("\nAverage of the 10 grades is: %.2f\n", average);

    return 0;
}
