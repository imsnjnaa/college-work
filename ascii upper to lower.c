#include <stdio.h>
#include <math.h>
int main()
{
   char ch;
   printf("\n enter character: ");
   scanf("%c",&ch);
   ch=ch+32;
   printf("\n lower case character is %c", ch);
   printf("\n ascii value is %d",ch);
   return 0;
}
