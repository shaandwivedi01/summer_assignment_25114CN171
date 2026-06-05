/* Write a program to find all Armstrong numbers in a range. */

/*
Step 1: Start
Step 2: Declare variables m, n, digits, r, sum, temp
Step 3: Input m and n
Step 4: If m > n, swap m and n
Step 5: Print "The Armstrong numbers are: "
Step 6: For i from m to n, do
        Initialize digits = 0, sum = 0, temp = i
        If temp == 0, set digits = 1
        Else while temp != 0, do
            Increment digits by 1
            temp = temp / 10
        Set temp = i
        While temp != 0, do
            r = temp % 10
            sum = sum + power(r, digits)
            temp = temp / 10
        If i == 0, set sum = 0
        If sum == i, print i
Step 7: End
*/

#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int m, n, digits, r, sum, temp;

    printf("Enter first number: ");
    scanf("%d", &m);

    printf("Enter second number: ");
    scanf("%d", &n);

    if (m > n)
    {
        int t = m;
        m = n;
        n = t;
    }

    printf("The Armstrong numbers are: ");

    for (int i = m; i <= n; i++)
    {
        digits = 0;
        sum = 0;
        temp = i;

        if (temp == 0)
        {
            digits = 1;
        }
        else
        {
            while (temp != 0)
            {
                digits++;
                temp /= 10;
            }
        }

        temp = i;

        while (temp != 0)
        {
            r = temp % 10;
            sum += power(r, digits);
            temp /= 10;
        }

        if (i == 0)
        {
            sum = 0;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

/*
Enter first number: 100
Enter second number: 999
The Armstrong numbers are: 153 370 371 407
*/