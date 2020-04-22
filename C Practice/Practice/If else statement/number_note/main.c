#include <stdio.h>

int main()
{
    int note500, note100, note50, note20, note10, note5, note2, note1;
    int amount = 0;

    printf("\nEnter amount: ");
    scanf("%d", &amount);

    if(amount>=500)
    {
        note500 = amount/500;
        amount = amount%500;
    }
    printf("\namount after 500:%d\n",amount);

    if (amount>=100)
    {
        note100 = amount/100;
        amount = amount%100;
    }
    printf("\namount after 100:%d\n",amount);

    if(amount>=50)
    {
        note50 = amount/50;
        amount = amount%50;
    }
    printf("\namount after 50:%d\n",amount);

    if(amount>=20)
    {
        note20 = amount/20;
        amount = amount%20;
    }
    printf("\namount after 20:%d\n",amount);

    if(amount>=10)
    {
        note10 = amount/10;
        amount = amount%10;
    }
    printf("\namount after 10:%d\n",amount);

    if(amount>=5)
    {
        note5 = amount/5;
        amount = amount%5;
    }
    printf("\namount after 5:%d\n",amount);

    if(amount>=2)
    {
        note2 = amount/2;
        amount = amount%2;
    }
    printf("\namount after 2:%d\n",amount);

    if(amount==1)
    {
        note1 = amount;
    }

    printf("\nTotal number of notes: ");
    printf("\n500: %d piece.\n", note500);
    printf("\n100: %d piece.\n", note100);
    printf("\n50: %d piece.\n", note50);
    printf("\n20: %d piece.\n", note20);
    printf("\n10: %d piece.\n", note10);
    printf("\n5: %d piece.\n", note5);
    printf("\n2: %d piece.\n", note2);
    printf("\n1: %d piece.\n", note1);


    return 0;
}
