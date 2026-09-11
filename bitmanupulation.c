/* Bit manupulation 
    1.Bitwise OR |
    2.Bitwise AND &
    3.Bitwise XOR ^
    4.Bitwise NOT(one's Compliment) ~
    5.Left shift operator <<
    6.right shift operator >>
*/

#include <stdio.h>


int main(){

int a = 4;
int b = 9;

printf("bitwise OR %u \n", (a|b));
/*
   4 -> 0100
   9 -> 1001
       ------
        1101
*/

printf("bitwise AND %u \n", (a&b));
/*
*/

printf("bitwise XOR %u\n",(a^b));
/*
*/

printf("bitwise NOT %u\n",(~b));
printf("bitwise NOT %u \n",(~4294967289));
/*
*/

printf("left-shit : %d\n",(15<<3)); //0101 << 0101000



return 0;
}