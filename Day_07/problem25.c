/*Write a program to Recursive factorial.*/

/*
Step 1: Begin
Step 2: Declare n
Step 3: Input n
Step 4: If n < 0, print "Factorial is not defined for negative numbers" and stop
Step 5: Define recursive_fact(n)
Step 6: If n = 0 or n = 1, return 1
Step 7: Return n * recursive_fact(n - 1)
Step 8: Print recursive_fact(n)
Step 9: End
*/

#include <stdio.h>

int recursive_fact(int n);

int main(void)
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("The factorial of %d is: %d\n", n, recursive_fact(n));

    return 0;
}

int recursive_fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * recursive_fact(n - 1);
}

/*recursive_fact(5)
= 5 * recursive_fact(4)
= 5 * 4 * recursive_fact(3)
= 5 * 4 * 3 * recursive_fact(2)
= 5 * 4 * 3 * 2 * recursive_fact(1)
= 5 * 4 * 3 * 2 * 1
= 120
*/

/*
Enter the number: 5
The factorial of 5 is: 120
*/