/* Write a C program to find LCM of two numbers */

/*
Step 1: Start
Step 2: Declare variables m, n, lcm = 1
Step 3: Input m and n
Step 4: If m == 0 or n == 0, print "LCM of m and n is 0" and stop
Step 5: Set start = max(m, n)
Step 6: For i = start to m * n, do if i % m == 0 and i % n == 0, set lcm = i and break
Step 7: Print lcm
Step 8: End
*/

#include <stdio.h>

int main()
{
    int m, n, lcm = 1;

    printf("Enter first number: ");
    scanf("%d", &m);

    printf("Enter second number: ");
    scanf("%d", &n);

    if (m == 0 || n == 0)
    {
        printf("LCM of %d and %d is 0\n", m, n);
        return 1;
    };

    int start = (m > n) ? m : n;

    for (int i = start; i <= n * m; i++)
    {

        if (i % m == 0 && i % n == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("The lcm of %d and %d is %d", m, n, lcm);
    return 0;
}

/*
Enter first number: 12
Enter second number: 15
The lcm of 12 and 15 is 60
*/