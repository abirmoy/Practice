#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("\nEnter the three side of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1+side2>side3) && (side1+side3>side2) && (side2+side3>side1))
        printf("\nValid Triangle.\n");
    else
        printf("\nNot a triangle.\n");


    return 0;
}
