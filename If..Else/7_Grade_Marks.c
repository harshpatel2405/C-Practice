#include <stdio.h>

int main()
{
    float maths, science, physics, total, avg;

    printf("Enter Marks for maths , science and Physics \n");
    scanf("%f%f%f", &maths, &science, &physics);

    total = maths + science + physics;
    printf("\nYour Total is %0.2f",total);
    avg = total / 3;
    printf("\nYour Average is %0.2f\n",avg);

    if (avg > 90)
    {
        printf("Grade : A");
    }
    else if (avg > 80)
    {
        printf("Grade : B");
    }
    else if (avg > 65)
    {
        printf("Grade : C");
    }
    else if (avg > 50)
    {
        printf("Grade : D");
    }
    else
    {
        printf("You are fail...");
    }
}