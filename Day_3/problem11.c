/* Write a program to find GCD of two numbers */

/*
Step 1: Start
Step 2: Declare variables n, m, gcd = 1
Step 3: Input n and m
Step 4: For i = 2 to min(n, m), do if n % i == 0 and m % i == 0, set gcd = i
Step 5: Print gcd
Step 6: End
*/

#include <stdio.h>

int main()
{

    int n, m, gcd = 1;

    printf("Enter first integer: ");
    scanf("%d", &n);

    printf("Enter second integer: ");
    scanf("%d", &m);

    for (int i = 2; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }

    printf("\nGCD of %d and %d is: %d\n", n, m, gcd);

    return 0;
}

/*
Enter first integer: 48
Enter second integer: 18
GCD of 48 and 18 is: 6
*/