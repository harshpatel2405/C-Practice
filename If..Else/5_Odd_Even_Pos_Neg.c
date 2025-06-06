#include <stdio.h>

int main()
{
    int a;

    printf("Enter number to check pos and neg : ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Number is zero(0)");
    }
    else if (a > 0 && a %  2 == 0)
    {
        printf("Number is Positive.. and even");
    }
    else if (a > 0 && a %  2 == 1)
    {
        printf("Number is Positive.. and Odd");
    }
    else if (a < 0 && a %  2 == 0)
    {
        printf("Number is Negative..and even");
    }

    // here i have used != because if we use ==1 then since modulus of negative is always negative and will return negative only and will not be equal to 1 so we are using != 0;
    else if (a < 0 && a %  2 != 0)
    {
        printf("Number is Negative..and odd");
    }
}