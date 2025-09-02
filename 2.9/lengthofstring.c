#include <stdio.h>  
#include <string.h>
int main(){
    char str1[10],str2[10];  
    printf("\nenter any name: ");
    gets(str1);
    printf("\nenter any name: ");
    gets(str2);
    strcat(str1,str2)
    printf("\ncopied string is %s",str1);
    return 0;   
}  