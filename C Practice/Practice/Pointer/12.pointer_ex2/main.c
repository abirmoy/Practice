#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    int number = 0; //a variable of type int initialized to 0
    int *pnumber = NULL;//a pointer that can point to type int

    number = 10;
    printf("\nNumber's address: %p\n", &number);//output the address
    printf("Pnumber's value: %d\n\n",number );//output the value

    pnumber = &number;//store the address of number in pnumber

    printf("Pnumber's address: %p\n", &pnumber);//output of the pointer address itself
    printf("Pnumber's size: %d bytes\n", sizeof(pnumber));//output the size of the pointer
    printf("Pnumber's value: %p\n", pnumber);//output the value(an address)
    printf("Value pointed to: %d\n", *pnumber);//value of the address

    return 0;
}
