#include <stdio.h>

int wartosc_a (int x) 
{
    int v = 1;
    v += x;
    return v;
}

int wartosc_b (int x) 
{
    static int v = 1;
    v += x;
    return v;
}

main()
{
    int a[3];
    a[0] = wartosc_a(2);
    a[1] = wartosc_a(3);
    a[2] = wartosc_a(4);
    int b[3];
    b[0] = wartosc_b(2);
    b[1] = wartosc_b(3);
    b[2] = wartosc_b(4);
    // version a
    printf("%d\n", a[0]); // prints 3
    printf("%d\n", a[1]); // prints 4
    printf("%d\n", a[2]); // prints 5
    // version b
    printf("%d\n", b[0]); // prints 3
    printf("%d\n", b[1]); // prints 6
    printf("%d\n", b[2]); // prints 10
}