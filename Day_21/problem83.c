#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, vow = 0, con = 0;
    printf("Enter any string-");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vow++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            con++;
        }
    }
    printf("Number of vowels=%d\n", vow);
    printf("Number of consonents=%d", con);
    return 0;
}