#include <stdio.h>

// function with parameters and return value
int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}

//----------------------------------------------------------------------------------------------------

// function without parameters and with return value
int subNumbers()
{
    int a, b;
    printf("enter two numbers \n");
    scanf("%d%d", &a, &b);
    return (a - b);
}

//----------------------------------------------------------------------------------------------------

// function without parameter and return value
void multNumbers()
{
    int f_num, s_num, sum;
    printf("enter two number \n");
    scanf("%d%d", &f_num, &s_num);
    sum = f_num * s_num;
    printf("the sum of multiplication of two numbers %d * %d = %d \n", f_num, s_num, sum);
}

//----------------------------------------------------------------------------------------------------

// function with parameter and without retun value
void divNumbers(int a, int b)
{
    int result = a / b;
    printf("the sum of divison of two numbers %d - %d = %d", a, b, result);
}

int main()
{
    int num1, num2, add, sub, mult, div;

    printf("enter two numbers \n");
    scanf("%d%d", &num1, &num2);

    add = addNumbers(num1, num2); // function with arguments and return value
    printf("sum of add two numbers %d + %d = %d \n", num1, num2, add);

    printf("substract two numbers \n");
    sub = subNumbers(); // function without argument with return value
    printf("sum of substracted two numbers is : %d \n", sub);

    printf("multiplication of two numbers \n");
    multNumbers(); // function without argumnet and return value

    printf("sum of division of two numbers \n");
    divNumbers(num1, num2); // function with argument and without return value

    return 0;
}