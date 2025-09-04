//array of structures
#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    float marks;
};
int main(){
    struct student s1[2];
    int i;
    for (i=0;i<2;i++)
    {printf("\nenter student name: "); scanf("%s", s1[i].name);
    printf("\nenter roll number: "); scanf("%d", &s1[i].rollno);
}
printf("\nstudent records: ");
printf("\nname\t\trollno");
printf("\n---------------------------");
    for (i=0;i<2;i++)
 {  printf("\n%s\t\t%d", s1[i].name,s1[i].rollno);
}
return 0;
}