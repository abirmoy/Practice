#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    _Bool f, g, h, i, j, k, l;

    a = 10;
    b = 20;
    c = 3;
    d = a / c; //will print the digits before decimal
    e = a % c;//prints the remainder



    //also same for decrement
    printf("Postfix increment of a = %d\n", a++);//supposed to print 10
    printf("Prefix increment of a = %d\n", ++a);//supposed to print 12 not 11 because postfix increment has been invoked previous line
    printf("Postfix increment of a = %d\n", a++);//prints 11 not 10 because a become 11 in previous line

    //Modulus operator%,
    printf("Result of A divided by C = %d\n", d);//Answer is 3 as type of variable is int so nothing will be printed that are after decimal.
    printf("Remaining value of A/C = %d\n", e);//Answer is 1.


    /*
    Checking Boolean expression and Logical Operators
    for && both have to be true, || either of them is true
    ! if something is true it gonna reverse it
    */
    f = 0;
    g = 0;
    k = 1;
    h = f && g;//&& is AND operator
    i = f || k;//|| is OR operator
    j = !(f&&g);//revers the situation of 'f'
    printf("Logical operator\n%d\n",h);//prints false because both is not true
    printf("%d\n",i);//prints true cause either of them is true
    printf("%d\n",j);// true because f&&g is false

    return 0;
}
