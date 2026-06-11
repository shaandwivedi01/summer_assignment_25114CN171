/* Write a C program to find the largest prime factor of a given number. */

/*
Step 1: Start
Step 2: Declare variables num
Step 3: Input num
Step 4: If num <= 0, print "Please enter a positive integer." and end
Step 5: For i from num/2 down to 2, do
        If num % i == 0, then
            Check if i is prime
            If i is prime, print "Largest prime factor of num is: i" and end
Step 6: If no factors found, print "num is prime, so its largest prime factor is itself."
Step 7: End
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Please enter a positive integer greater than 1.\n");
        return 1;
    }

    for (int i = num / 2; i >= 2; i--)
    {
        if (num % i == 0)
        {
            int isPrime = 1;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
            {
                printf("Largest prime factor of %d is: %d\n", num, i);
                return 0;
            }
        }
    }

    printf("%d is prime, so its largest prime factor is itself.\n", num);

    return 0;
}

/*
Enter a number: 28
Largest prime factor of 28 is: 7
*/