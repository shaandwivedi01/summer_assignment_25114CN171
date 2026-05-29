/* Write a program to count the number of digits in a number */

/*
Step 1: Start
Step 2: Declare variables num, digits
Step 3: Input num
Step 4: Initialize digits = 0
Step 5: While num != 0, do num = num / 10, digits++
Step 6: Print digits
Step 7: End
*/

#include <stdio.h>

int main()
{
    float num;
    int digits = 0;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num != (int)num)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int n = (int)num;

    if (n == 0)
        digits = 1;
    else
    {
        while (n != 0)
        {
            n /= 10;
            digits++;
        }
    }

    printf("Number of digits: %d\n", digits);
    return 0;
}

/*
Enter a number: 12345
Number of digits: 5
*/