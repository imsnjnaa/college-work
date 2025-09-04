#include <stdio.h>
#include <string.h>
    struct student {
        int id;
        char name[50];
        float marks;
    };
int main(){
    struct student s1,s2;
    printf("enter details of student 1 (ID name marks): ");
    scanf("%d %s %f",&s1.id, s1.name, &s1.marks);
    printf("enter details of student 2 (ID name marks): ");
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks);
    if (s1.id==s2.id && strcmp(s1.name, s2.name)==0 && s1.marks==s2.marks)
    {printf("\nboth structures are equal");}
    else
    {printf("\nboth structures are not equal");}
    return 0;
} 