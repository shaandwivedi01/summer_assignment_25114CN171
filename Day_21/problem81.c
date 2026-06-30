#include <stdio.h>
int main()
{
    int n, length = 0;
    printf("Enter maximum length of string-");
    scanf("%d", &n);
    char str[n];
    printf("Enter any string-");
    scanf("%s", str);
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of string is %d", length);
    return 0;
}