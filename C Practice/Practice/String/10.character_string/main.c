#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "To be or not to be";
    char str2[] = ", that is the question";
    unsigned int count = 0;//stores the string length

    while (str1[count] != '\0')//increment count till
        ++count;              //reach the terminating character

    printf("The length of string \"%s\" is %d characters.\n", str1, count);


    count = 0;//reset count for next string

    while(str2[count] != 0)//0 or '\0' both valid
        ++count;//count characters in 2nd string

    printf("The length of string\"%s\" is %d characters.\n", str2, count);

    return 0;
}
