/* structure in c
- user defined data type
- can group related data type into a single unit
- can hold different data type(int, char , float)

*/
#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
};

int main()
{

    struct student s1;

    s1.id = 1278;
    strcpy(s1.name, "bibin");

    printf("name = %s\n", s1.name);
    printf("id = %d", s1.id);

    return 0;
}