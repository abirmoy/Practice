/* we will be using enum data type here
*/

#include <stdio.h>

int main()
{
    enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    enum Company xerox = XEROX;


    printf("The value of Xerox is: %d\n", xerox);
    return 0;

}
