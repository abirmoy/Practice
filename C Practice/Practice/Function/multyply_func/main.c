#include <stdio.h>

int multiply_two_numbers (int x, int y);

int main()
{
   int x = multiply_two_numbers(5,6);
   printf("%d", x);

   return 0;
}

int multiply_two_numbers (int x, int y)
{
    int result;
     result = x*y;

     return result;

}
