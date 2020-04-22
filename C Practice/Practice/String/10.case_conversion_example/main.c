#include <stdio.h>
//#include <string.h>

int main(void)
{
    char text[100];//input buffer for string to be searched
    char substring[40];//input buffer for string sought

    printf("Enter the string to be searched(less than %d characters): ", 100);
    scanf("%s", text);

    printf("\nEnter the string sought(less than %d characters): ", 40);
    scanf("%s", substring);

    printf("\nFirst string entered: \n%s\n", text);
    printf("\nSecond string entered: \n%s\n", substring);


    //convert both string to upper case
    for( int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; i++);
    for(int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; i++);

    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not": "was"));



    return 0;
}
