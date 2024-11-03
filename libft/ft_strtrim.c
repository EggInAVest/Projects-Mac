#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_sortset(char const *set, char c);

char    *ft_strtrim(char const *str1, char const *set)
{
    int i;
    int k;
    int str_len;
    char    *ptr;

    str_len = strlen(str1) - 1;
    i = 0;
    while (ft_sortset(set, str1[i]))// Check from start if 'set' chars are in the string and find the "real" starting point
    {
        i++;
    }
    while (ft_sortset(set, str1[str_len]) && str_len > i)// Check from end if 'set' chars are in the string and find the "real" end point
    {
        str_len--;
    }
    ptr = malloc((str_len - i + 2) * (sizeof(char)));
    if (ptr == NULL)
    {
        return (NULL);
    }
    k = 0;
    while (str_len >= i)
    {
        ptr[k] = str1[i];
        i++;
        k++;
    }
    ptr[k] = '\0';
    return (ptr);
}

int ft_sortset(char const *set, char c)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    const char test[] = "ababababaHelloWorldabababa";
    const char find[] = "ab";
    char *res;

    res = ft_strtrim(test, find);
    printf("Original: %s\nTo Trim: %s\nRes: %s\n", test, find, res);
    return (0);
}