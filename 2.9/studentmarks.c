#include <stdio.h> 
#include <stdlib.h>
    char name[10][10],result[4][10];
    int sid[10],math[3],english[3],rollno[10],i=-1;
    void inputdata(){
        ++i;
        printf("\nenter student's name: ");
        scanf("%s",name[i]);
        printf("\nenter student roll number: ");
        scanf("%d",&rollno[i]);
        printf("\nenter student ID: ");
        scanf("%d",&sid[i]);
        printf("\nenter math marks: ");
        scanf("%d",&math[i]);
        printf("\nenter english marks: ");
        scanf("%d",&english[i]);
        printf("\ndata added");
    }
    void showdetails(){
    int j;
        printf("\nname\trollnumber\tSID\tmath\tenglish");
        printf("\n-------------------------------------------------------");
        for (j=0;j<=i;j++)
        {printf("\n%d\t%d\t%d\t%d\t%s",sid[j],math[j],english[j],rollno[j],name[j]);}
    }
    int main(){
        int ch;
        while(1){
            printf("\n1.input data");
            printf("\n2.show details");
            printf("\n3.exit");
            printf("\nselect any choice: ");
            scanf("%d",&ch);
    switch(ch){
    case 1: inputdata();
            break;
    case 2: showdetails();
            break;
    case 3: exit(0);
        }
    }
    return 0;
    }