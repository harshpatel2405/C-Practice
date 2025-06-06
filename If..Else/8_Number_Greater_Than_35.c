#include <stdio.h>

int main()
{
    int a, b, c, sum = 0;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > 35)
    {
        sum += a;
    }
    if (b > 35)
    {
        sum += b;
    }
    if (c > 35)
    {
        sum += c;
    }

    printf("Sum is %d", sum);
}