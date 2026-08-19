/*nested sturcture
     - a structure containing another structure as its member

*/

#include <stdio.h>
#include <string.h>

typedef struct // child structure
{
    int date;
    int month;
    int year;

} date;

typedef struct // parent structure
{
    char name[50];
    int id;
    date joining_date;
} employee;

int main()
{
    employee emp1;

    emp1.id = 1289;
    strcpy(emp1.name, "Bibin Thomas");
    emp1.joining_date.date = 18;
    emp1.joining_date.month = 10;
    emp1.joining_date.year = 2026;

    printf("employee name : %s\n", emp1.name);
    printf("employee id : %d\n", emp1.id);
    printf("joining date : %d / %d / %d\n", emp1.joining_date.date, emp1.joining_date.month, emp1.joining_date.year);

    return 0;
}