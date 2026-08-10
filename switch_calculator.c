#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operation;

    printf("please enter two number \n");
    scanf("%d%d", &num1, &num2);
    printf("enter the operation \n");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("result is %d", result);
        break;

    case '-':
        result = num1 - num2;
        printf("result is %d", result);
        break;

    case '*':
        result = num1 * num2;
        printf("result is %d", result);
        break;

    case '/':
        result = num1 / num2;
        printf("result is %d", result);
        break;

    default:
        break;
    }

    return 0;
}