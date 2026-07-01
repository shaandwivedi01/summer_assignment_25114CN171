#include <stdio.h>

int main()
{
    int a[10], n, i, ch, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do
    {
        printf("\n1.Display\n2.Sum\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Array: ");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;

        case 2:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d\n", sum);
            break;

        case 3:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
        }

    } while (ch != 3);

    return 0;
}