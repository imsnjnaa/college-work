#include <stdio.h>
#include <math.h>
int main()
{
  char ch,name[7];
  printf("\n enter any character: ");
  ch=getchar();
  printf("\n character is: ");
  putchar(ch);
  fflush(stdin);
  printf("\n enter string: ");
  gets(name);
  printf("\n name is %s", name);
  puts(name);
  return 0;
}
