/* Write a program to Check perfect number.*/

/*
Step 1: Start
Step 2: Declare variables num, sum
Step 3: Input num
Step 4: Initialize sum = 0
Step 5: For i from 1 to num/2, do
        If num % i == 0, add i to sum
Step 6: If sum == num, print "num is a perfect number"
Step 7: End
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of divisors: %d\n", sum);

    if (sum == num)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}

/*
Enter a number: 28
Sum of divisors: 28
28 is a perfect number.
*/