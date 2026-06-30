#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0;
    int len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i];
            len++;
        }
        else
        {
            word[j] = '\0';

            if (len > maxLen)
            {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0;
            len = 0;

            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}