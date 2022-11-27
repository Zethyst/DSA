// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
int main(void)
{
    char ch;
    double discount1, discount2, net;
    int fees, per;
    printf("\n\tWELCOME TO KIIT");
    printf("\nPlease enter your fees to avail discount: ");
    scanf("%d", &fees);
    fflush(stdin);
    printf("\nEnter the following details to get discount on your fees..");
    printf("\n\nGender(M/F): ");
    scanf(" %c", &ch);
    fflush(stdin);
    net = fees;
    if (ch == 'M' || ch == 'm')
    {
        discount1 = 0;
    }
    if (ch == 'F' || ch == 'f')
    {
        discount1 = 0.10 * fees;
    }
    printf("\nEnter your percentage in 12th: ");
    scanf("%d", &per);
    if (per >= 90)
    {
        discount2 = 0.20 * fees;
    }
    else if (per >= 80)
    {
        discount2 = 0.10 * fees;
    }

    else if (per >= 70)
    {
        discount2 = 0.05 * fees;
    }
    else
    {
        discount2 = 0;
    }
    net = fees - (discount1 + discount2);
    if (fees == net)
        printf("\nSorry you didn't met the required criteria to avail discount.");
    else
        printf("\nYour Fees after Discount: %.2lf", net);
    return 0;
}
// END OF LINE