#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("strcmp(\"A\", \"A\") is: %d\n", strcmp("A","B"));

    printf("strcmp(\"B\", \"A\") is: %d\n", strcmp("B","A"));

    printf("strcmp(\"C\", \"A\") is: %d\n", strcmp("C","A"));

    printf("strcmp(\"Z\", \"a\") is: %d\n", strcmp("Z","z"));

    printf("strcmp(\"apples\", \"apple\") is: %d\n", strcmp("apples","apple"));

    //applying strncpm function for finding prefix
    if(strncmp("astronomy", "astro", 5) == 0)
        printf("\nFound astronomy\n");

    if (strncmp("astounding", "astro", 5) == 0)
        printf("\nFound astounding\n");
    else
        printf("Nothing found in astounding");

}
