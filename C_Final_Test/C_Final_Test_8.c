#include <stdio.h>

void zmien(int *t, int s)
{
    *t = s;
    s = t[2];
    t[1] = s;
    s = t[4];
    t[3] = s;
}

main()
{
    int z = 0, a[6] = {1, 2, 3, 4, 5, 6};
    zmien(a+1, z);
    *a = z;
    printf("%d\n", a[0]); // prints 0
    printf("%d\n", a[1]); // prints 0
    printf("%d\n", a[2]); // prints 4
    printf("%d\n", a[3]); // prints 4
    printf("%d\n", a[4]); // prints 6
    printf("%d\n", a[5]); // prints 6
    exit(0);
}