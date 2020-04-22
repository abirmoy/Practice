#include <stdio.h>
#include <string.h>

int main(void)
{
    char my_string[] = "my string";

    char src[50], dest[55];
    strcpy(src, "hey this is use of strcpy function");
    printf("length of scrcpy is: %d\n",strlen(src));
    printf("The length of my string is: %d",strlen(my_string));

    //copying string to dest character array
    strncpy(dest, src, sizeof(dest) - 1);//sizeof(dest-1) implies that we
    //don't wanna copy more than 55 character and -1 is for null terminator
    //always use strncpy instead of strcpy
    printf("\n%s", dest);//printing after copy supposed to print scr array


    //concatenating 2 string, should use strncat() instead of strcat
    char src2[50], dest2[55];
    strcpy(src2, " this is source");
    strcpy(dest2, " this is destination");
    strncat( dest2, src2, 50);//15 implies that how many character we want to copy into dest
    printf("\nfinal destination string:|%s|", dest2);



    return 0;
}
