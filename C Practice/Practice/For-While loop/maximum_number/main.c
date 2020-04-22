#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\nEnter 2 integer: ");
    scanf("%d %d", &num1, &num2);

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch (num1>num2)
    {

        /* Expression (num1 > num2) will return either 0 or 1 */
        case 1:
            printf("max:%d", num1);
            break;

        /* If condition (num1>num2) is false */
        case 0:
            printf("max: %d", num2);
            break;
        default:
            printf("\nEnter Valid num.\n");
            break;
    }


    return 0;

}
