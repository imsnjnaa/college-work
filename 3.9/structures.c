#include <stdio.h>
struct student
{
    int sid;
    char name[10];
    float per;
};
int main(){
    struct student s1={100,"marie",95.5};
    struct student s2;
    printf("\nenter name: "); scanf("%s",s2.name);
    printf("\nenter ID: "); scanf("%d", &s2.sid);
    printf("\nenter percentage: "); scanf("%f", &s2.per);
    printf("\nsid=%d\tname=%s\tper=%f", s1.sid,s1.name,s1.per);
    printf("\nsid=%d\tname=%s\tper=%f", s2.sid,s2.name,s2.per);
    return 0;
}