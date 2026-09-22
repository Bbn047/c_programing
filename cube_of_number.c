/*print cube of number
  - read a number from user
  - run the loop until that value
  - inside the loop print value*valu*value
*/

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("cube of number %d = %d \n", i, (i * i * i));
    }

    return 0;
}