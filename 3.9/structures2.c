#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    float marks;
};
int main(){
    struct student stu={34,"marie",45};
    struct student *ptr=&stu;
    printf("\nenter name: %s",ptr->name);
    printf("\nenter roll number: %d",ptr->rollno);
    printf("\nenter percentage: %f",ptr->marks);
    return 0;
}