#include <stdio.h>

int main()
{
    int value, count = 0, temp, digit, sum = 0;
    int power;

    printf("Enter a value: ");
    scanf("%d", &value);

    temp = value;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    temp = value;

    while (temp != 0)
    {
        digit = temp % 10;

        power = 1;

        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        temp = temp / 10;
    }

    if (sum == value)
    {
        printf("%d is an Armstrong value.\n", value);
    }
    else
    {
        printf("%d is not an Armstrong value.\n", value);
    }

    return 0;
}