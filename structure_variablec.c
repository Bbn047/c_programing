#include <stdio.h>
struct student
{
    int id;
    int marks;
};

int main()
{

    /* Method 1 : using dot(.) operator */
    struct student s1; // creating structure variable name s1
    s1.id = 1013;      // giving values
    s1.marks = 1920;

    /*printing values*/
    printf("METHOD 1 USING DOT(.) OPERATOR\n");
    printf("student ID : %d \n", s1.id);
    printf("Student marks : %d\n", s1.marks);

    /*Method 2 :using Structure Pointers Arrow operator (->)*/
    struct student s2;
    struct student *sptr = &s2; // create stucture pointer that points to structure vaiable s2

    sptr->id = 1023; // assign values
    sptr->marks = 1929;

    // printing the student details
     printf("METHOD 2 USING ARROW OPERATOR (->)\n");
    printf("student id : %d\n", sptr->id);
    printf("student marks : %d\n", sptr->marks);

    return 0;
}