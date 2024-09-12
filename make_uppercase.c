#include <unistd.h>
#include <stdio.h>

char *make_upper(char *string)
{
    int i;

    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] > 96 && string[i] < 123)
        {
            string[i] = string[i] - 32;
        }
        else
        {
            string[i] = string[i];
        }
        i++;
    }
    return(string);
}

int main (void)
{
    char answer[] = "My Name Is Roni";
    char *result;

    result = make_upper(answer);
    printf("Uppercased: %s\n", result);
    return(0);
}