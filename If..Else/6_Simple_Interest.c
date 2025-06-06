#include <stdio.h>

int main()
{
    float si, principal, rate, time;

    printf("Enter Principal Amount : ");
    scanf("%f", &principal);

    printf("Enter Rate Of Interest : ");
    scanf("%f", &rate);

    printf("Enter Time Frame (In years) : ");
    scanf("%f", &time);

    si = principal * rate * time / 100;

    printf("\nSimple interest is %0.2f", si);
    printf("\nAmount After %0.2f years will be %0.2f", time, si + principal);
}