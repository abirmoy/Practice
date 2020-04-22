#include <stdio.h>
#include <stdlib.h>

int main()


{
    double minutesinYear, years, days;

    int minutes = 0;
    years = 00.0;
    days = 0.0;
    minutesinYear = 0.0;

    printf("Enter minutes:");
    scanf("%d", &minutes);

    minutesinYear =  (60 * 24 * 365);
    years = minutes / minutesinYear;
    days = ( minutesinYear / 60.0 ) / 24.0;
    printf("Year is: %f days is: %f", years, days);

    return 0;
}
