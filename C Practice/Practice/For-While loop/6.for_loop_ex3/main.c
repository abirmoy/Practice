#include <stdio.h>
int main()
{
    unsigned long long sum = 0LL;//stores the sum of the integers;unsigned only takes positive,signed takes both
    unsigned int count = 0;//The number of integer to be summed

    //read the number of integer to be summed
    top: printf("\nEnter the number of integer you want to sum: ");
    scanf("%i", &count);

    //sum integer from 1 to count
    for(unsigned int i = 1; i <= count; ++i)
    {
        sum +=i;
        printf("Loop\n");//just to check how many time the loop has been executing
    }

    printf("\nTotal sum of the first %u numbers is %llu\n", count, sum);


    //my style
    int check_continue;
    printf("Please enter 1 to try again or 0 to exit: ");
    scanf("%i", &check_continue);
    if(check_continue == 1)
    {
        goto top;
    }
    else return 0;

}
