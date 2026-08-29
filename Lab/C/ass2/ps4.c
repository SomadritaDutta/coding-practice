#include <stdio.h>

int main()
{
    int age, duration;
    float tem;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter temperature: ");
    scanf("%f", &tem);

    printf("Enter symptom duration in days: ");
    scanf("%d", &duration);

    if (tem < 37.5)
    {
        printf("Risk Level: Low\n");
    }
    else if (tem < 39)
    {
        printf("Risk Level: Moderate\n");
    }
    else
    {
        printf("Risk Level: High\n");
    }

    return 0;
}