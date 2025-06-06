#include <stdio.h>

int main()
{
    int no;

    printf("Enter number to check for even and odd : ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("Number is even...");
    }
    else
    {
        printf("Number is Odd..");
    }
}