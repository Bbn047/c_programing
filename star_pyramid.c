/*write a c program to print a pyramid of stara for a given number n
if n=5
output :
         *              ---> - - - - *            --> 4 space
        ***                  - - - * * *          --> 3 space
       *****                 - - * * * * *        --> 2 space
      *******                - * * * * * * *      --> 1 space
     *********               * * * * * * * * *    --> 0 space
*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // loop for printing space
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        // loop for printing stars
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }

        printf("\n"); // go to next line
    }

    return 0;
}