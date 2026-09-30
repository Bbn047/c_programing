/*find second largest number from an array
  conditions :
  -Do not ort the array
  -assume he array has at least two distinct elements
  */
#include <stdio.h>

int main() {
    int numbers[6];
    int largest_number=0;
    int second_largest=0;
    printf("enter 6 numbers : \n");
    for(int i=0; i<6; i++) {
        printf("enter number: ");
        scanf("%d", &numbers[i]);
    }

    for(int i=0; i<6; i++) {
        printf("%d ",numbers[i]);
    }

    for( int i=0; i<6; i++) {
        if(numbers[i]>largest_number) {
            second_largest= largest_number;
            largest_number = numbers[i];
        }
        else if(second_largest<numbers[i] && largest_number> numbers[i]) {
            second_largest = numbers[i];
        }
    }
    printf("\nsecond largest number : %d", second_largest);
    return 0;
}