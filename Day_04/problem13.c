/* Write a program to generate fibonacci series. */

/*
Step 1: Start
Step 2: Declare variables a = 0, b = 1, n
Step 3: Input n
Step 4: If n <= 0, print "Please enter a positive number."
Step 5: Else if n == 1, print "Fibonacci series up to n term is: 0"
Step 6: Else, print "Fibonacci series up to n terms is: 0 1 "
        For i from 0 to n-2, do
            sum = a + b
            Print sum
            a = b
            b = sum
Step 7: End
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 1, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
    }
    else if (n == 1)
    {
        printf("Fibonacci series up to %d term is: 0\n", n);
    }
    else
    {
        printf("Fibonacci series up to %d terms is: 0 1 ", n);

        for (int i = 0; i < n - 2; i++)
        {
            int sum = a + b;
            printf("%d ", sum);
            a = b;
            b = sum;
        }
    }

    return 0;
}

/*
Enter the number of terms: 10
Fibonacci series up to 10 terms is: 0 1 1 2 3 5 8 13 21 34
*/