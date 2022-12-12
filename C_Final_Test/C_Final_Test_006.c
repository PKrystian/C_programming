#include <stdio.h>

void zmien(int *p, int q)
{
    static r = 2;
    *p = r;
    r += q;
    q = r;
}

main()
{
    int a=0, b=1, c=2, d=3, e=4, f=5;
    zmien(&a, b);
    zmien(&c, d);
    zmien(&e, f);
    printf("%d\n", a); // prints 2
    printf("%d\n", b); // prints 1
    printf("%d\n", c); // prints 3
    printf("%d\n", d); // prints 3
    printf("%d\n", e); // prints 6
    printf("%d\n", f); // prints 5
}