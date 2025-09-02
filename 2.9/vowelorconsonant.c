#include <stdio.h>  
#include <string.h>
int main(){
    char ch;
    printf("\nenter any character: ");
    scanf("%c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {printf("\n%c is vowel",ch);}
    else if (ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u')
    {printf("\n%c is consonant",ch);}
    else if (ch>=48 && ch<=57)
    {printf("\n%c is a digit",ch);}
    else {printf("\n%c is special symbol",ch);}
    return 0;
}  