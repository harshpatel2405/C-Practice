#include <stdio.h>

int main()
{
    int balance, minBal = 5000;

    printf("Enter your account balance : ");
    scanf("%d",&balance);

    if (balance < minBal)
    {
        printf("Your Balance is Under Minimum Balance.");
        printf("\nYou will be charge penalty of 5 percentage  of Minimum Balance.");

        printf(",So your Penalty is %f", 0.05 * minBal);
    }
    else
    {
        printf("No Penalty...Since balance > minbal");
    }
}