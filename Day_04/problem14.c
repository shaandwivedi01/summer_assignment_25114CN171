/*  C program to find the nth term of the Fibonacci series */

/*
Step 1: Start
Step 2: Declare variables a = 0, b = 1, n
Step 3: Input n
Step 4: If n <= 0, print "Please enter a positive number."
Step 5: Else if n == 1, print "The 1st term of the Fibonacci series is: 0"
Step 6: Else, For i from 0 to n-2, do
            sum = a + b
            a = b
            b = sum
        Print "The nth term of the Fibonacci series is: b"
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
        printf("The 1st term of the Fibonacci series is: 0\n");
    }
    else
    {

        for (int i = 0; i < n - 2; i++)
        {
            int sum = a + b;
            a = b;
            b = sum;
        }

        printf("The %dth term of the Fibonacci series is: %d\n", n, b);
    }

    return 0;
}

/*
Enter the number of terms: 10
The 10th term of the Fibonacci series is: 34
*/