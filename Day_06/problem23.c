/*Write a program to Bubble sort.*/

/*
Step 1: Declare n, set_bits = 0
Step 2: Input n
Step 3: while n > 0, do sets_bits = set_bits + (n & 1)
                     n = n >> 1
Step 4: Print set_bits
Step 5: End
*/

#include <stdio.h>

int main(void)
{
    int n, set_bits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        set_bits += (n & 1); // Add 1 if the last bit is set
        n >>= 1;             // Shift right by 1 bit
    }

    printf("Number of set bits: %d\n", set_bits);

    return 0;
}

/*
Enter a number: 8
Number of set_bits: 1
*/