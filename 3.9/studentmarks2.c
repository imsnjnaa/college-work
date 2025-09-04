#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    float marks;
};
struct student change(struct student stu){
    stu.marks=stu.marks+5;
    stu.rollno=stu.rollno-10;
    return stu;
}
void display(struct student studptr)
{
    printf("\nname: %s", studptr.name);
    printf("\nrollno: %d", studptr.rollno);
    printf("\nmarks: %f", studptr.marks);
}
int main(){
    struct student
    stud2={34,"marie",45};
    stud2=change(stud2);
    display(stud2);
    return 0;
}