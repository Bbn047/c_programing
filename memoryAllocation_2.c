#include <stdio.h>
#include <stdlib.h> //required for dynamic memory allocation

int main()
{
    int n = 2;

    // malloc
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("memory allocation failed \n");
        return 1;
    }

    printf("values added to the aray\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 10;
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;


    return 0;
}