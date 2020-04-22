/*
Purpose : to get familiar with enum function
Author: Abir
Date: February 9, 2019
*/
#include <stdio.h>


int main()
{
    /*Creating type (company) and defining it.
    Variable company can have these values
    */
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT=10, BAIDU};//we can also specify their value.
    enum company xerox, google, ebay, microsoft, baidu; //creating variable
    xerox = XEROX;
    google = GOOGLE;
    ebay = EBAY;
    microsoft = MICROSOFT;
    baidu = BAIDU;
    //console should output 2,0 and 4
    printf("Value of\nXerox = %d\nGoogle = %d\neBany = %d\n",xerox, google,ebay);

    //console should output 10,11
    printf("Value of(explicitly assigned)\nMicrosoft = %d\nBaidu = %d\n", microsoft, baidu);



    return 0;
}
