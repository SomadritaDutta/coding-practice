#include <stdio.h>

int main()
{
    int N, i, j, temp, digit, sum;
    int prime, square;

    printf("Enter Number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        prime = 1;

        if (sum < 2)
        {
            prime = 0;
        }
        else
        {
            for (j = 2; j < sum; j++)
            {
                if (sum % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        square = 0;

        for (j = 1; j * j <= sum; j++)
        {
            if (j * j == sum)
            {
                square = 1;
                break;
            }
        }

        if (prime == 1)
        {
            printf("%d-P\n", i);
        }
        else if (square == 1)
        {
            printf("%d-S\n", i);
        }
        else if (sum % 2 == 0)
        {
            printf("%d-E\n", i);
        }
        else
        {
            printf("%d-O\n", i);
        }
    }

    return 0;
}