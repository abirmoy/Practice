#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = "Hello -how are you -my name is Abir";
    const char s[2] = "-";
    char *token;
    //get the first token
    token = strtok(str, s);

    //walk through all others
    while(token != NULL){
        printf("%s\n",token);
    token = strtok(NULL, s);
    }
    return 0;
}
