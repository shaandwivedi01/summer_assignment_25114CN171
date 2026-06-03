/*Write a program to find prime numbers in a given range */

/*
Step 1: Start
Step 2: Declare variables m, n, isPrime
Step 3: Input m and n
Step 4: If m <= 1 or n <= 1, display an error message and stop
Step 5: If m > n, swap m and n
Step 6: For each number i from m to n:
            Set isPrime = 1
            For j = 2 while j * j <= i:
                If i % j == 0:
                    Set isPrime = 0
                    Break
            If isPrime == 1:
                Print i
Step 7: End
*/

#include <stdio.h>

int main()
{

    int m, n, isPrime = 1;

    printf("Enter first integer: ");
    scanf("%d", &m);

    printf("Enter second integer: ");
    scanf("%d", &n);

    if (n <= 1 || m <= 1)
    {
        printf("Both numbers should be greater than 1.\n");
        return 1;
    }

    if (m > n)
    {
        int temp = n;
        n = m;
        m = temp;
    }

    printf("Prime numbers between %d and %d are: ", m, n);

    for (int i = m; i <= n; i++)
    {
        isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

/*
Enter first integer: 10
Enter second integer: 20
Prime numbers between 10 and 20 are: 11 13 17 19
*/