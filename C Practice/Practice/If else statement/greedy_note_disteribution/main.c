#include <stdio.h>

int main()
{
    int money = 2093;

    int note500;
    int note100;
    int note50;
    int note20;
    int note5;
    int note1;

    int temp;

    if (money>500)
    {
        note500 = money/500;
        printf("\n%d piece of $500.\n",note500);
        temp = money%500;//493
        if (temp>100 && temp<500)
        {
            note100 = temp/100;
            printf("\n%d piece of $100.\n", note100);
            temp = money%100;
        }
        else if (temp<100)
        {
            note50 = money/50;
            printf("\n%d piece of $50.\n", note50);
        }


    }


    return 0;

}
