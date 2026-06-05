/* Write program to check Armstrong number*/

/*
Step 1: Start
Step 2: Declare variables n, digits = 0, r, sum = 0, temp
Step 3: Input n
Step 4: Initialize temp = n
Step 5: If temp == 0, digits = 1
Step 6: Else, While temp != 0, do
        digits++
        temp = temp / 10
Step 7: Initialize temp = n
Step 8: While temp != 0, do
        r = temp % 10
        sum = sum + (r^digits)
        temp = temp / 10
Step 9: If n == 0, sum = 0
Step 10: If sum == n, print "The number is an Armstrong number."
Step 11: Else, print "The number is not an Armstrong number."
Step 12: End
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, digits = 0, r, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

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

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        sum += (int)pow(r, digits);
        temp /= 10;
    }

    if (n == 0)
    {
        sum = 0;
    }

    if (sum == n)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}

/*
Enter a number: 153
The number is an Armstrong number.
*/