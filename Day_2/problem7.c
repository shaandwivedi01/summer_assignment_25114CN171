/* Write a program to find the product of digits of a number */

/*
Step 1: Start
Step 2: Declare variables num, n, product = 1
Step 3: Input num
Step 4: Check if num is an integer
Step 5: Initialize n = num
Step 6: If n < 0, make n positive
Step 7: While n > 0, do
        product = product * (n % 10)
        n = n / 10
Step 8: Print product
Step 9: End
*/

#include <stdio.h>

int main()
{
    float num;
    int product = 1;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num != (int)num)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int n = (int)num;

    if (n < 0)
        n = -n;

    if (n == 0)
    {
        printf("Product of digits: 0\n");
        return 0;
    }

    while (n > 0)
    {
        product *= n % 10;
        n /= 10;
    }

    printf("Product of digits: %d\n", product);

    return 0;
}

/*
Enter a number: 12345
Product of digits: 120
*/