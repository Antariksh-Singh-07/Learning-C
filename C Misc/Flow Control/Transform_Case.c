#include <stdio.h>
#include <string.h>

int lower(char str[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    return 0;
}

int upper(char str[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (97 <= str[i] && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    return 0;
}

int main()
{
    // A = 65, a = 97; A+32 = a
    // Z = 90, z = 122; Z+32 = z
    char str[] = "Transformers";
    int len = strlen(str);

    printf("%d\n", len);
    upper(str, len);
    printf("%s\n", str);
    lower(str, len);
    printf("%s\n", str);

    return 0;
}