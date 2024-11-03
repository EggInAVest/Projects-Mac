#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strjoin(char const *str1, char const *str2)
{
    char *ptr;
    int i;
    int k;
    int j;
    int tot_len;

    tot_len = strlen(str1) + strlen(str2);
    ptr = malloc((tot_len + 1) * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    i = 0;
    k = 0;
    while (str1[k] != '\0')
    {
        ptr[i] = str1[k];
        i++;
        k++;
    }
    j = 0;
    while (str2[j] != '\0')
    {
        ptr[i] = str2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main(void)
{
    char const str1[] = "Hello, ";
    char const str2[] = "World!";
    char *result;

    result = ft_strjoin(str1, str2);
    if (result != NULL)
    {
        printf("Result: \"%s\"\n", result);
        free(result);  // Free allocated memory after use
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
