#include <stdio.h>

int main()
{
    int N, i, temp, digit, sum;
    int prime, square, j;
    int reverse, original;

    int countP = 0, countS = 0, countE = 0, countO = 0;
    int palindromeCount = 0;

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

        original = i;
        temp = i;
        reverse = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (reverse == original)
        {
            palindromeCount = palindromeCount + 1;
        }

        if (prime == 1)
        {
            printf("%d-P", i);
            countP++;
        }
        else if (square == 1)
        {
            printf("%d-S", i);
            countS++;
        }
        else if (sum % 2 == 0)
        {
            printf("%d-E", i);
            countE++;
        }
        else
        {
            printf("%d-O", i);
            countO++;
        }

        if (reverse == original)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("P = %d\n", countP);
    printf("S = %d\n", countS);
    printf("E = %d\n", countE);
    printf("O = %d\n", countO);
    printf("Palindromes = %d\n", palindromeCount);

    return 0;
}