#include <stdio.h>
#include <string.h>

int main()
{
    char buf[100];//input buffer
    int nLetters = 0;//Number of letters in input
    int nDigits = 0;//Number of digits in input
    int nPunct = 0;//Number of punctuation in characters

    printf("Enter an interesting of less than %d characters: ", 100);
    scanf("%s", buf);// read a string into buffer

    int i=0;
    while( buf[i])
    {
        if (isalpha(buf[i]))
            ++nLetters;//increment letters count
        else if (isdigit(buf[i]))
            ++nDigits;//increment digit count
            else if (ispunct(buf[i]))
            ++nPunct;
        ++i;
    }


    printf("\nYour string contained %d letters, %d digits, %d punctuation.\n", nLetters, nDigits, nPunct);

    return 0;

}
