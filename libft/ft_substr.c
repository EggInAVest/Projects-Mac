#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *str, unsigned int start, size_t len)
{
    char    *ptr;
    size_t i;

    ptr = malloc((len + 1) * (sizeof(char)));
    if (ptr == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (len > i && str[start + i] != '\0')
    {
        ptr[i] = str[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main(void)
{
    size_t len;
    char const str[] = "This is a string";
    char *res;
    unsigned int start;

    len = 5;
    start = 5;

    res = ft_substr(str, start, len);
    printf("Original String: %s\n", str);
    printf("Start: %d\nLength: %zu\n", start, len);
    printf("Result: %s\n", res);
    return (0);
}