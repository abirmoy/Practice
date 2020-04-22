#include <stdio.h>

int main()
{
    enum daysIn_aWeek {Saturday=1, Sunday, Monday, Tuesday, Wenesday, Thursday, Friday};
    enum daysIn_aWeek weekend = (Saturday, Sunday);

    printf("%d", weekend);

    return 0;
}
