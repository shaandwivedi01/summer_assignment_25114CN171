#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do
    {
        printf("\n1. Length\n2. Reverse\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Length = %zu\n", strlen(str) - 1);
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s\n", str);
            break;

        case 3:
            printf("Exiting...");
            break;

        default:
            printf("Invalid Choice!");
        }

    } while (ch != 3);

    return 0;
}