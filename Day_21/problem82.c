#include <stdio.h>
int main()
{
    int n, length = 0, j = 0;
    printf("Enter maximum length of string-");
    scanf("%d", &n);
    char str[n], str2[n];
    printf("Enter any string-");
    scanf("%s", str);
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
    {

        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0';

    printf("%s", str2);

    return 0;
}