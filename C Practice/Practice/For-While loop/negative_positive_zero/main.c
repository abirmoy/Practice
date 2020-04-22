#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter a num: ");
    scanf("%d", &num);

    switch (num>0)
    {
    // Num is positive
    case 1:
        printf("Positive");
        break;

    // Num is either negative or zero
    case 0:
        switch (num<0)
        {
        case 1:
            printf("Negative");
            break;
        case 0:
            printf("Zero");
            break;
        }
        break;

    }

    return 0;
}
