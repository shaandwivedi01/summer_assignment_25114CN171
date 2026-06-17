/*WAP to find x^(n) without using pow()*/

/*
Step 1: Begin
Step 2: Declare x, n, ans = 1, i = 0
Step 3: Input x
Step 4: Input n
Step 5: for i = 0 to i < n do i++
        ans = ans * x
Step 6: Print ans
Step 7: End
*/

#include <stdio.h>

int main()
{
    int x, n, ans = 1, i = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Enter the exponent: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        ans = ans * x;
    }

    printf("Result = %d", ans);
}

/*
Enter the number: 2
Enter the exponent: 3
Result = 8
*/