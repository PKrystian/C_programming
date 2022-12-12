#include <stdio.h>

int main() 
{
	int *p1, *p2;
    int a=1, b=2, c=3, d=4, e=5, f=6;
    p1 = &c;
    c = 11;
    b = *p1;
    c = 22;
    a = *p1;
    p2 = p1;
    e = *p2;
    *p2 = 45;
    d = *p1;
    *p1 = 58;
    f = *p2;
    printf("%d\n", a); // prints 22
    printf("%d\n", b); // prints 11
    printf("%d\n", c); // prints 58
    printf("%d\n", d); // prints 45
    printf("%d\n", e); // prints 22
    printf("%d\n", f); // prints 58
	return 0;
}