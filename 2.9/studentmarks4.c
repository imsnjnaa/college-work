#include <stdio.h>
#include <stdlib.h>
char name[10][10];
int rollno[10],i=-1,math[10],eng[10],t[10],sql[10],dbms[10],clang[10],result[10];
void input(){  ++i;
    printf("\nenter student's name: ");
    scanf("%s",name[i]);
    printf("\nenter roll number: ");
    scanf("%d",&rollno[i]);
    printf("\nenter math marks: ");
    scanf("%d",&math[i]);
    printf("\nenter english marks: ");
    scanf("%d",&eng[i]);
    printf("\nenter dbms marks: ");
    scanf("%d",&dbms[i]);
    printf("\nenter sql marks: ");
    scanf("%d",&sql[i]);
    printf("\nenter clang marks: ");
    scanf("%d",&clang[i]);
    printf("\ndata added");
}
void show(){
    int j,t,p;
    t=math[i]+eng[i]+sql[i]+clang[i]+dbms[i];
    p=t/5;
    if (p>=40 && p<=100)
    {strcpy(result[i], "pass");}
    else
    {strcpy(result[i], "fail");}
    printf("\nstudentname\trollno\tmath\tenglish\tdbms\tsql\tclang\ttotal\tpercentage");
    printf("\n---------------------------------------------------------------------------------");
    for(j=0;j<=i;++j){
        printf("\n%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d",name[j],rollno[j],math[j],eng[j],dbms[j],sql[j],clang[j],t,p);
    }
}
int main()
{
    int ch;
    while(1){
        printf("\n1.input data");
        printf("\n2.show details");
        printf("\n3.exit");
        printf("\nselect any choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: input();
                    break;
            case 2: show();
                    break;
            case 3: exit(0);        
        }
    }
return 0;
}
