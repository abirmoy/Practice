#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int n=1;n<=100;n++)
    {

        if((n%3==0)&&(n%5==0))
        {
            printf(" FizzBuzz ");
        }
        else if (n%3==0)
            printf(" Fizz ");
        else if (n%5==0)
            printf(" Buzz ");
        else
            printf(" %d ", n);

    }


    return 0;


}
