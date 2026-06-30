#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, k, found;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Common characters are: ");

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n' || str1[i] == ' ')
            continue;

        found = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            for (k = 0; k < i; k++)
            {
                if (str1[k] == str1[i])
                    break;
            }

            if (k == i)
                printf("%c ", str1[i]);
        }
    }

    return 0;
}