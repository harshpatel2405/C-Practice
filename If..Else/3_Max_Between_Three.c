#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is Max.....");
        }
        else
        {
            printf("C is Max....");
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("B is Max.....");
        }
        else
        {
            printf("C is Max...");
        }
    }
}