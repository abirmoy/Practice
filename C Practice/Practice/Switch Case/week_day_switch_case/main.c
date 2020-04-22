#include <stdio.h>

int main()
{
    int weekday_num;

    printf("\nInput week number(1-7): ");
    scanf("%d", &weekday_num);

    switch (weekday_num)
    {
    case 1:
        printf("\nToday is Monday.\n");
        break;
    case 2:
        printf("\nToday is Tuesday.\n");
        break;
    case 3:
        printf("\nToday is Wednesday.\n");
        break;
    case 4:
        printf("\nToday is Thursday.\n");
        break;
    case 5:
        printf("\nToday is Friday.\n");
        break;
    case 6:
        printf("\nToday is Saturday.\n");
        break;
    case 7:
        printf("\nToday is Sunday.\n");
        break;
    default:
        printf("\nPlease enter a valid day\n");
        break;
    }


    return 0;
}
