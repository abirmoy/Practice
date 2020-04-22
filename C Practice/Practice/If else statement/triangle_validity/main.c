#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum_angle;

    //prompt user input
    printf("\nEnter 3 angles: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    //sum of all the angles are always 180
    //so if the sum of three angle
    //is equal to 180 degree its a valid triangle else invalid
    sum_angle = angle1+angle2+angle3;

    if(sum_angle == 180 && angle1!=0 && angle2!=0 && angle3!=0)
        printf("\nValid Triangle.\n");
    else
        printf("\nNot a Triangle.\n");

    return 0;
}
