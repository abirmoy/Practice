    #include <stdio.h>

    int main()
    {
    char ch;

    //Get the user input
    printf("Enter any latter to check: ");
    scanf("%c", &ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
    printf("\n%c is a vowel.\n", ch);
    }

    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("\n%c is a consonant.\n", ch);
    else
    printf("\n%c is not an alphabet.\n", ch);



    return 0;

    }
