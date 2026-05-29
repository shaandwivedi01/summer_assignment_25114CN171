/* WAP to calculate the sum of first N natural numbers. */

/*
Step 1: Start
Step 2: Declare variables n, sum, i
Step 3: Input n
Step 4: Initialize sum = 0
Step 5: For i = 1 to n, do sum = sum + i
        If n < 1, print "Please enter a positive number." and end
Step 6: Print sum
Step 7: End
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

/*
Enter n: 5
Sum of first 5 natural numbers = 15
*/