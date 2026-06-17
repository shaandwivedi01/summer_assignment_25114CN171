/*Write a program to Convert binary to decimal.*/

/*
Step 1: Start
Step 2: Declare n, r=0, sum=0 & base=1
Step 3: Input n
Step 4: while n > 0, do r = n % 10
                      sum = sum + r * base
                      base = base * 2
                      n = n / 10
Step 5: Print Decimal = sum
Step 6: End
*/

#include <stdio.h>

int main(void)
{
    int n, r = 0, sum = 0, base = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * base;
        base *= 2;
        n /= 10;
    }

    printf("Decimal = %d\n", sum);
}

/*
Enter the number: 1000
Decimal = 8
*/