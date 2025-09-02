#include <stdio.h>
int main(){
    int a=87;
    int *p1=&a;
    printf("\naddress of a is %u", &a); //unaddressed value so we use %u (unsigned integer)
    printf("\naddress of p1 is %u", &p1);
    printf("\naddress of p1 is %d", p1);
    printf("\naddress of a is %d", a); //adressed value so we use %d
    printf("\naddress of a is %d", *p1);
    printf("\naddress of a is %d", *(&a));
    return 0;
}