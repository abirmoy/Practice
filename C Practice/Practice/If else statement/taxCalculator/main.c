#include <stdio.h>

#define GROSS_PAY 12
#define OVER_PAY 18
#define TAX_300 .15
#define TAX_450 .2
#define TAX_REST .25
int main()
{
    int hours_worked = 0.0;
    double salary;//工资
    double tax;//税


    top: printf("Please enter the hours you have worked: ");//输入工作时
    scanf("%i",&hours_worked);



        if (hours_worked < 40)
        {
            salary = GROSS_PAY * hours_worked;
        }

        else
        {
            salary = (GROSS_PAY * 40) + ((hours_worked - 40) * OVER_PAY);
        }

        printf("Your salary without tax: %.2f$\n",salary);

    //tax calculating
    if (salary <= 300)
        tax = salary * TAX_300;
    else if (salary > 300 && salary <= 450)
        {
            tax = 300 * TAX_300;
        tax += (salary - 300) * TAX_450;
        }

    else if ( salary > 450)
        {
            tax = 300 * TAX_300;
            tax += 150 * TAX_450;
            tax += (salary - 450) * TAX_REST;

        }



    printf("Your tax: %.2f$\n",tax);

    double net_salary = salary - tax;
    printf("Your Net salary: %.2f$\n",net_salary);











    printf("\nEnter 1 to continue or 0 to exit: ");
    int check_continue;
    scanf("%i",&check_continue);
    if (check_continue == 1)
    goto top;
    else
        return 0;









    return 0;
}
