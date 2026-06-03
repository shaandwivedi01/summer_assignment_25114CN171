/*Write a program to check if a number is prime or not */

/*
Step 1: Start
Step 2: Declare variables n, isPrime = 1;
Step 3: Input n
Step 4: If n <= 1, set isPrime = 0
Step 5: For i = 2 to sqrt(n), do if n % i == 0, set isPrime = 0 and break
Step 6: If isPrime == 1, print "n is a prime number." else print "n is not a prime number."
Step 7: End
*/

#include <stdio.h>

int main()
{

    int n, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

/*
Enter an integer: 17
17 is a prime number.
*/