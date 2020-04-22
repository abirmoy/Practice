#include <stdio.h>

int getint(int min, int max);
int main()
{
    int min, max;
    printf("Please enter min,max:\n");
    scanf("%d,%d", &min, &max);
    printf("The integer you have entered is:%d\n", getint(min, max));
    return 0;
}
int getint(int min, int max)
{
    int n;
    do
    {
        printf("Please enter an integer [%d..%d]:\n", min, max);
        scanf("%d", &n);
    }while(n < min || n > max);
    return n;
}
