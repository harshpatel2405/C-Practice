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
    else if (a > 0)
    {
        printf("Number is Positive..");
    }
    else if (a < 0)
    {
        printf("Number is Negative..");
    }
}