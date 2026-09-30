/* you are given an 8-bit register represented as an unsigned char. write a function to:
  - Set the 3rd bit(index 2)
  - clear the 6th bit (index5)
  - toggle the 1st bit (index 0)
  * use bitwise operaters only. avoid loops and condtions 
  */
  #include <stdio.h>
  
  unsigned char modified_register(unsigned char mod_register){
  mod_register = mod_register|(1<<2); //setting bit
  /* 1011 0101  ->181
     0000 0100
     ---------
     1011 0101
  */
  mod_register = mod_register &~(1<<5); //clearing bit
  /* 1011 0101       <-----|
     0010 0000 -> (1<<5)   |
     1101 1111 -> ~ <------|
     --------------------- |
     1001 0101 -> 85     <-|          
  */
  mod_register = mod_register ^(1<<0); // flip/toggle bit
  /*1001 0101 -> ^(1<<0)
    0000 0001 -> 
    ----------
    1001 0100 ->148 
  */
  return mod_register;
  }
  
  int main(){
  unsigned char input_register = 0b10110101; //1+4+16+32+128 = 
  unsigned char output_register = modified_register(input_register);
  
  printf("input register value before modified : %d\n",input_register);
  printf("modified register value: %d\n",output_register);
  
  return 0;
  }