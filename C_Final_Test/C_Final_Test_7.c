#include <stdio.h>

int ff(int x, int *y)
{
    x = 10;
    *y = x + 13;
    return x;
}

int gg(int *x, int y)
{
    return ff(*x, &y);
}

main()
{
    int a=1, b=2, c=3, d=4, e=5, f=6;
    c = gg(&a, b);
    d = ff(e, &f);
    printf("%d\n", a); // prints 1
    printf("%d\n", b); // prints 2
    printf("%d\n", c); // prints 10
    printf("%d\n", d); // prints 10
    printf("%d\n", e); // prints 5
    printf("%d\n", f); // prints 23
}