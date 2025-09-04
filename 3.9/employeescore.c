#include <stdio.h>
struct employee
{
    int ID;
    char name[50];
    float score;
};
int main(){
    int n,i,topindex=0;
    printf("\nenter number of employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    for (i=0;i<n;i++)
    {printf("\nenter details of employee: \n");
    printf("ID: ");
    scanf("%d",&emp[i].ID);
    printf("\nscore: ");
    scanf("%f", &emp[i].score);
    printf("\nname: ");
    scanf("%s", emp[i].name);}
if (emp[i].score>emp[topindex].score)
{topindex=i;}
printf("\n-------top scorer--------\n");
printf("ID: %d\n",emp[topindex].ID);
printf("name: %s\n", emp[topindex].name);
printf("score: %f\n", emp[topindex].score);
return 0;
}