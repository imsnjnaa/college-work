#include <stdio.h>
#include <math.h>
int main()
{
  char ch,name[6];
  printf("\n enter any character:");
  ch=getchar();
  printf("\n character is:");
  putchar(ch);
  printf("\n enter string:");
  gets(name);
  prtinf("\n name is %s", name);
  puts(name);
  return 0;
}
