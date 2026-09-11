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
    0 0 - 0
    1 0 - 1
    0 1 - 1
    1 1 - 1


   4 -> 0100
   9 -> 1001
       ------
        1101  -> 13
*/

printf("bitwise AND %u \n", (a&b));
/*  
    0 0 - 0
    1 0 - 0
    0 1 - 0
    1 1 - 1


     4 -> 0100
     9 -> 1001
         ------
          0000  -> 0
*/

printf("bitwise XOR %u\n",(a^b));
/*  
    0 0 - 0
    1 0 - 1
    0 1 - 1
    1 1 - 0

    4 -> 0100
    9 -> 1001
        ------
         1101  ->13
*/

printf("bitwise NOT %u\n",(~b));
printf("bitwise NOT %u \n",(~4294967289));
/*
   0 -> 1
   1 -> 0

    9 -> 1001  --  0000 0000 0000 0000 0000 0000 0000 1001
                   1111 1111 1111 1111 1111 1111 1111 0110  --> 6
*/

printf("left-shit : %d\n",(15<<3));
 /*
   0000 0000 0000 0000 0000 0000 0000 1111
   0000 0000 0000 0000 0000 0000 0111 1000
                          0   1  1  1   1 0 0 0
                         128 64 32 16   8 4 2 1 => 64+32+16+8 -> 120
*/

printf("right-shit : %d\n",(15>>3));
 /*
   0000 0000 0000 0000 0000 0000 0000 1111
   0000 0000 0000 0000 0000 0000 0000 0001
                          0   0  0  0   0 0 0 1
                         128 64 32 16   8 4 2 1 =>  1
*/


return 0;
}