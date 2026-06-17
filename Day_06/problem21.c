/* Write a program to Convert decimal to binary. */

/*
Step 1: Begin
Step 2: Declare n, binary[100], i = 0
Step 3: Input n
Step 4: while (n > 0) do binary[i] = n % 2
        i++
        n = n / 2
Step 5: for j = i - 1 & j >= 0, do j--
            print binary[j]
Step 6: Print space
Step 7: End
*/

#include <stdio.h>

int main(void)
{
    int n, binary[100], i = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        binary[i] = n % 2;
        i++;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("Binary = %d", binary[j]);
    }

    printf("\n");

    return 0;
}

/*
Enter the number: 8
Binary = 1000
*/