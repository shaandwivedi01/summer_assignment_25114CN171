/* Write a program to find the sum of digits of a number */

/*
Step 1: Start
Step 2: Declare variables num, sum = 0;
Step 3: Input num
Step 4: Initialize n = num
Step 5: While  > 0, do = n / 10, sum += n % 10
Step 6: Print sum
Step 7: End
*/

#include <stdio.h>

int main()
{
    float num;
    int sum = 0;

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

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

/*
Enter a number: 12345
Sum of digits: 15
*/