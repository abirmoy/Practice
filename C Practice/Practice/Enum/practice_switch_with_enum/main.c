#include <stdio.h>
int main()
{
    enum weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum weekday today = Friday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday");
        break;
    case Monday:
        printf("Today is Monday");
        break;
    case Wednesday:
        printf("Today is Wednesday");
        break;
    default:
        printf("Hell");
    }


    return 0;
}
