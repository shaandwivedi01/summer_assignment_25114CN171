/* Write a program to Check strong number.*/

/*
Step 1: Start
Step 2: Declare variables num, sum
Step 3: Input num
Step 4: Initialize sum = 0
Step 5: Set temp = num
Step 6: While temp > 0, do
        Set digit = temp % 10
        Set temp = temp / 10
        Initialize product = 1
        For i from 1 to digit, do
            product = product * i
        sum = sum + product
Step 7: Print "Sum of factorials of digits: sum"
Step 8: If sum == num, print "num is a strong number"
Step 9: Else print "num is not a strong number"
Step 10: End
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        temp /= 10;
        int product = 1;

        for (int i = 1; i <= digit; i++)
        {
            product *= i;
        }
        sum += product;
    }
    printf("Sum of factorials of digits: %d\n", sum);

    if (sum == num)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }
}

/*
Enter a number: 145
Sum of factorials of digits: 145
145 is a strong number.
*/