#include <stdio.h>

int main()
{
    float result[5], mean, total;
    int n;
    printf("Enter marks: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d. %f", i, &result[i]);
    }

}
