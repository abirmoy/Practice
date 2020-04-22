#include <stdio.h>
int main()
{
    int minutes;
    double minutesin_year, days, years;

    minutesin_year = 365 * 24 * 60;


    printf("Please enter amount of minutes: ");
    scanf("%d", &minutes);
    days = (minutes / 60.0) / 24.0;
    years = minutes / minutesin_year;
    printf("Minutes you have entered: %d\nWhich quals to %f days\n%f years",minutes, days, years);


    return 0;
}
