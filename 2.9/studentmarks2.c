#include <stdio.h>
#include <stdlib.h>
char name[10][10];
int rollno[10],i=-1,math[10],eng[10];
void input(){  ++i;
    printf("\nEnter sname: ");
    scanf("%s",name[i]);
    printf("\nEnter rollno: ");
    scanf("%d",&rollno[i]);
    printf("\nEnter math marks: ");
    scanf("%d",&math[i]);
    printf("\nEnter eng marks: ");
    scanf("%d",&eng[i]);
    printf("\nData added.");
}
void show(){
    int j,t,p;
    t=math[i]+eng[i];
    p=t/2;
    printf("\nSname\tRollNo\tMath\tEnglish\tTotal\tPercentage");
    printf("\n-----------------------------------------------------");
    for(j=0;j<=i;++j){
        printf("\n%s\t%d\t%d\t%d\t%d\t%d",name[j],rollno[j],math[j],eng[j],t,p);
    }
}
int main()
{
    int ch;
    while(1){
        printf("\n1.Input Data");
        printf("\n2.Show Details");
        printf("\n3.Exit");
        printf("\nSelect any choice");
        scanf("%d",&ch);
        switch(ch){
            case 1: input();
                    break;
            case 2: show();
                    break;
            case 3: exit(0);        
        }
    }
    return 0;
}
