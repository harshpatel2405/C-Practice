#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        printf("A and B are same......");
    }
    else if (a > b)
    {
        printf("A is Max.....");
    }
    else
    {
        printf("B is Max....");
    }
}