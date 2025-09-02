#include <stdio.h> 
#include <stdlib.h>
    char name[10][10];
    int sid[10],phone[10],rollno[10];
    void inputdata(){
        }
    void showdetails(){
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