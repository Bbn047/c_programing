#include <stdio.h>

struct Student
{
    int id;
    float marks;
};


// function to modify the marks
void modify_mark(struct Student *sptr)
{
    sptr->marks = 96.3;
}


int main()
{

    struct Student s1 = {1012, 92.5};
    printf("before updating, Marks: %.3f\n", s1.marks);

    // function call
    modify_mark(&s1); // sending address of the structure s1 to the update mark function
    printf("after updating , Mars: %.3f\n", s1.marks);

    return 0;
}