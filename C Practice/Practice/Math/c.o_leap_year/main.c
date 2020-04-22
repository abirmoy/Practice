/*
This program this program tells if the year entered is leap year
or common year using conditional operator.


Conditional operator(?:): Most of the operator is unary(takes single argument) or
binary(takes two argument) wheres conditional operator is ternary.
Which means it can take three operand(or argument).



In the Gregorian calendar three criteria must be taken into account to identify leap years:

The year can be evenly divided by 4;
If the year can be evenly divided by 100, it is NOT a leap year, unless;
The year is also evenly divisible by 400. Then it is a leap year.
This means that in the Gregorian calendar, the years 2000 and 2400 are leap years, while
1800, 1900, 2100, 2200, 2300 and 2500 are NOT leap years.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d", &year);

     /*
     * If year%4==0 and year%100==0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year
     */


    (year%4==0 && year%100!=0)
    ?printf("\n%d is a leap year.\n", year)
    :(year%400==0)
    ?printf("\n%d is a leap year.\n", year)
    :printf("\n%d is a common year.\n", year);




    return 0;
}
