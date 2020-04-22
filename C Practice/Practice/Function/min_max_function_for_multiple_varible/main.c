#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

//declaration of function prototype
int max (int args,...);
int min (int args,...);

int main()
{

}


/**
 * Find maximum between two or more integer variables
 * @param args Total number of integers
 * @param ... List of integer variables to find maximum
 * @return Maximum among all integers passed
 */


 int max (int args,...)
 {
     int i, max, cur;
     va_list valist;
     max = INT_MIN;

     for (i=0; i<args; i++)
    {
        cur = va_arg(valist, int); // Get next elements in the list
        if(max < cur)
            max = cur;
    }

    va_end(valist); // Clean memory assigned by valist

    return max;
 }
