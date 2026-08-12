
/* passing values to function
     1) pass by value
     2) pass by reference
*/

#include <stdio.h>

// pass by value example
int test_byValue(int number1, int number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

//------------------------------------------------------------------------------------------------

// pass by reference example
void test_byReference(int* address1, int* address2)
{

    printf("address of the numbers before swap a = %p, b = %p \n",&address1, &address2);
    printf("numbers before swap a = %d, b = %d \n", *address1, *address2);
    int* temp = address1;
    address1 = address2;
    address2 = temp;

printf("address of the numbers after swap a = %p, b = %p \n", &address1,&address2);
printf("numbers after swap a = %d , b = %d \n", *address1, *address2);

}

//--------------------------------------------------------------------------------------------------

int main()
{

    int num1 = 2, num2 = 8;

    // pass by value example 
    printf("PASS BY VALUE EXAMPLE \n");
    printf("The numbers before swap  a = %d, b = %d\n", num1, num2); 
    test_byValue(num1, num2);                                        // function calling 
    printf("the data received from the function a = %d, b = %d \n \n",num1, num2); // value received after swap

    // pass by reference example
    test_byReference(&num1, &num2); //function calling
    

    return 0;
}