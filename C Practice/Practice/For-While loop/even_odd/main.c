#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter a num: ");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0:
        printf("\nEven.\n");
        break;
    case 1:
        printf("\nOdd\n");
        break;

    }

    return 0;
}
