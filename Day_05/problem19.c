/* Write a C program to find the factors of a given number. */

/*
Step 1: Start
Step 2: Declare variables num, sum
Step 3: Input num
Step 4: If num <= 0, print "Please enter a positive integer." and end
Step 5: Print "Factors of num are: "
Step 6: For i from 1 to num/2, do
        If num % i == 0, print i
Step 7: End
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

    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            printf("%d ", i);
        }
    };
    return 0;
}

/*
Enter a number: 28
Factors of 28 are: 1 2 4 7 14
*/