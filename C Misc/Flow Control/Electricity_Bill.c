/*
unit >= 600 | unit >= 400 | unit >= 200 | 0 <= unit <= 199
Rs 2.0/unit | Rs 1.8/unit | Rs 1.5/unit | Rs 1.2/unit
Minimum 100/- Bill
Surcharge of 15% in net Amount when Bill > 400
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int idno;
    float units, rate, bill, surcharge;
    char name[24];

    printf("Input Id No: ");
    scanf("%d", &idno);
    getchar();

    printf("Input Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Input Units Consumed: ");
    scanf("%f", &units);

    if (units >= 600)
    {
        rate = 2;
    }
    else if (units >= 400)
    {
        rate = 1.8;
    }
    else if (units >= 200)
    {
        rate = 1.5;
    }
    else if (units >= 0)
    {
        rate = 1.2;
    }
    else
    {
        printf("Units Consumed less than 0! Please enter a valid response");
    }

    bill = units * rate;

    printf("\n\nCustomer I'D No: %d \nCustomer Name: %s\nConsumed Units: %.2f \nAmount Charged Rs.%.2f/Unit: %.2f/-", idno, name, units, rate, bill);

    if (bill > 400.00)
    {
        surcharge = bill * 0.15;
        printf("\nSurcharge Amount (15%%): %.2f/-", surcharge);
        printf("\nNet Amount: %.2f/-", bill + surcharge);
    }
    else if (bill < 100)
    {
        printf("\nThe minimum bill amount is Rs. 100/-");
    }

    return 0;
}