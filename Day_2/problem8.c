/* Write a program to check if a number is a palindrome or not */

/*
Step 1: Start
Step 2: Declare variables n, temp, rev
Step 3: Input n
Step 4: Initialize rev = 0 and temp = n
Step 5: While temp != 0, do
        rev = rev * 10 + temp % 10
        temp = temp / 10
Step 6: If n < 0, print "Negative numbers are not palindromes."
Step 7: Else if n == rev, print "The number is a palindrome."
Step 8: Else print "The number is not a palindrome."
Step 9: End
*/

#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (n < 0)
    {
        printf("Negative numbers are not palindromes.\n");
        return 0;
    }

    if (n == rev)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {

        printf("The number is not a palindrome.\n");
    }

    return 0;
}

/*
Enter a number: 12321
The number is a palindrome.
*/