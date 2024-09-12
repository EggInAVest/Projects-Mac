#include <stdio.h>

int check_number(int num)
{
    if (num % 2 == 0)
    {
        return 1; // Even
    }
    return 0; // Odd
}

int main(void)
{
    int result;
    int num;

    printf("Please select a number: ");
    if (scanf("%d", &num) != 1) 
    {
        printf("Invalid input, please enter a number.\n");
        return 1;
    }
    
    result = check_number(num);
    if (result == 1)
    {
        printf("The number %d is EVEN\n", num);
    }
    else
    {
        printf("The number %d is ODD\n", num);
    }

    return 0; // Indicate successful completion
}