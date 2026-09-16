/* bit manupulation
     - set bit
     - clear bit
     - toggle bit
     get bit
*/

// code for set bit operation
/*
   using  OR bit operator (|)
   formula : number | (1 << possition)
             number: 1001-9
             possition  : 2

             1001
             0100
            ------
             1101
            9|(1<<2) ->  1101 - 13
*/
int setBit(int number, int possition)
{
    return number | (1 << possition);
}

/* clear bit operation
  number : 9
  possition : 3
  formula : number & (1<<possiton) --> clear the first bit ( (1)001)
           9- 1001 -------------------|
           3- 1000 - (1<<3)           |
              0111 - ~(mask) ---------|
             -------                  |
              0001 <-(1001 & 0111)  <-|
*/
int clearBit(int number, int possition)
{
    return number & ~(1 << 3);
}

/* toggle bit operation
    number : 9 -> 1001
    possion : 2
    formula : number ^ (1<<possition)

    9 - 1001
    2 - 0100  ^
    -----------
        1101
*/
int toggleBit(int number, int possition)
{
    return number ^ (1 << possition);
}

/* code for getting bit
  number : 15 ->  1111
  possition : 3
  formula :

*/
void getBit(int number, int possition)
{
    if ((number & 1) == 0)
    {
        printf("The input number is even");
    }
    else
    {
        printf("The input number is odd");
    }
}

#include <stdio.h>

int main()
{

    int number = 9;
    int possition = 2;

    // setbit operation
    printf("value after setting the %dth bit : %d \n", possition, setBit(number, possition));

    // clearbit operation
    printf("value after clear the 3th bit : %d \n", clearBit(9, 3));

    // toggle operation
    printf("value after clear the 3th bit : %d \n", toggleBit(9, 3)); // toggle possiton 3
    printf("value after clear the 2th bit : %d \n", toggleBit(9, 2)); // toggle possition 2

    // get bit operation
    getBit(36, 0);

    return 0;
}