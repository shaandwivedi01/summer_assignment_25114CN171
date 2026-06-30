#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i, found = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n' && freq[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character = %c", str[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("No non-repeating character found");
    }

    return 0;
}