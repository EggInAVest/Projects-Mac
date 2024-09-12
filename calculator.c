#include <stdio.h>
#include <unistd.h>

int calculator(int num1, int num2, char op);

int calculator(int num1, int num2, char op)
{
    int result;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    return (result);
}

int main(void)
{
    int num1, num2;
    int answer;
    char op;

    printf("First number: ");
    scanf("%d", &num1);
    printf("Operator: ");
    scanf(" %c", &op);
    printf("Second number: ");
    scanf("%d", &num2);
    answer = calculator(num1, num2, op);
    printf("%d %c %d is %d", num1, op, num2, answer);
}