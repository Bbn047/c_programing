#include <stdio.h>

int main() {
    char sentence[50];
    int alphabet_count = 0;
    int digit_count = 0;
    printf("enter a sentence with number : \n ");
    fgets(sentence, sizeof(sentence), stdin);

    printf ("you entered sentence is : %s \n", sentence);
    
    for(int i=0; sentence[i]!= '\0'; i++) {

        // checking the alphabets from the string
        if(sentence[i]>='a' && sentence[i]<= 'z' || sentence[i]>='A' && sentence[i]<= 'Z') {
            alphabet_count ++;
        }
        //checking the numbers from string
        else if(sentence[i]>='0' && sentence[i]<='9') {
            digit_count++;
        }
    }
    printf("alphabet count is : %d\n", alphabet_count);
    printf("digit count is : %d\n", digit_count);
    return 0;

}