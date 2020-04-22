/*

    This program prints week name according to their number.
*/

#include <stdio.h>

int main()
{
    int day;

    //prompt user input
    printf("\nEnter week number 1-7: ");
    scanf("%d", &day);

    if(day == 1)
    {
        printf("\nMonday.\n");
    }
    else if (day == 2)
    {
        printf("\nTuesday.\n");
    }
    else if (day==3)
        printf("\nWednesday.\n");
    else if (day==4)
        printf("\nThursday.\n");
    else if (day==5)
        printf("\nFriday.\n");
    else if (day==6)
        printf("\nSaturday.\n");
    else if (day==7)
        printf("\nSunday.\n");
    else
    {
        printf("\nError! Enter a valid number(1-7).\n");
    }




    return 0;
}
