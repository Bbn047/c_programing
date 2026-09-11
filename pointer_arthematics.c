#include <stdio.h>

int main(){
int num = 15;
printf ("the number is : %d \n ", num);     // print number

int * ptr = &num; //assign pointer
printf ("the address is %p \n", &num);      // address of the orginal number
printf ("the address is %p \n", ptr);      // address of the pointer

*ptr = 20;           // changing the number by using  pointer 

printf ("updated number is %d \n ", *ptr);        // print updated number
printf ("print the address of the value %p \n", &num);     // address of the orginal number after update
printf ("print the address of the value %p \n", ptr);      // address of the pointer after update

return 0;

}