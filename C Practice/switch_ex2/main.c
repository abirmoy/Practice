#include <stdio.h>
int main()

{
     float value1, value2;
    char operator;
    top: printf("Type your expression: ");//labeled for using goto statement.
    scanf("%f%c%f",&value1,&operator,&value2);
    switch (operator)
    {
    case '+':
        printf("%.2f\n",value1 + value2);
        break;
    case '-':
        printf("%.2f\n", value1 - value2);
        break;
    case '*':
        printf("%2f\n", value1 * value2);
        break;
    case '/':
        if (value2 == 0)
            printf("Devision by zero.\n");
        else
            printf("%.2f\n", value1 / value2);
        break;
    default:
        printf("Unknown operator.\n");
    }

    //goto need to learn how to use it
    printf("Want to try again?Press\n1.yes\n0.No\n");
    int decision;
    scanf("%i",&decision);
    if (decision == 1)
        goto top;
        else return 0;

    return 0;
}
