/* WAP to find factorial of a given number. */

/*
Step 1: Start
Step 2: Declare variables n, fact, i
Step 3: Input n
Step 4: Initialize fact = 1
Step 5: For i = 1 to n, do fact = fact * i
Step 6: Print factorial of n
Step 7: End
*/

#include <stdio.h>

int main()
{
    int n, i, fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

/*
Enter n: 5
Factorial of 5 is 120
*/