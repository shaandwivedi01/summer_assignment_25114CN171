/* WAP to print multiplication table of a given number. */

/*
Step 1: Start
Step 2: Declare variables n, product, i
Step 3: Input n
Step 4: Initialize product = 1
Step 5: For i = 1 to 10, do product = n * i
        If n == 0, print "Please enter a non zero number." and end
Step 6: Print product
Step 7: End
*/

#include <stdio.h>

int main()
{
    int n, i, product;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Please enter a non zero number.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++)
    {
        product = n * i;
        printf(" %d * %d = %d\n", n, i, product);
    }

    return 0;
}

/*
Enter n: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/