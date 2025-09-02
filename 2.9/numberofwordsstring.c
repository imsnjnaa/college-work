#include <stdio.h>  
int main(){
    char str[10];
    int count,i;
    printf("\nenter any string: ");
    gets(str);
    i=0;
    while(str[i]!='\0'){
    if(str[i]==' ')
    { ++count;}
      ++i;
    }
    printf("\nthe number of words is %d",count+1);
    return 0;
}