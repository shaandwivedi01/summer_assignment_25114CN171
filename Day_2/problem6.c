/* Write a program to reverse a number */

/*
Step 1: Start
Step 2: Declare variables n, temp, rev
Step 3: Input n
Step 4: Initialize rev = 0 and temp = n
Step 5: While temp != 0, do
        rev = rev * 10 + temp % 10
        temp = temp / 10
Step 6: Print rev
Step 7: End
*/

#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Reverse of the number: 0\n");
        return 0;
    }

    int temp = n;

    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("Reverse of the number: %d\n", rev);

    return 0;
}

/*
Enter a number: 12345
Reverse of the number: 54321
*/