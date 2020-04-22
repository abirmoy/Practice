#include <stdio.h>

int main()
{

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}
