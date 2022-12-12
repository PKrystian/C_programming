#include <stdio.h>

int main() 
{
	int tab[5] = {1, 12, 30, 400, 500};
    int *ptr, a, b, c, d, e, f;
    ptr = tab + 1;
    a = *ptr;
    b = ptr[2];
    ptr++;
    c = *ptr + 2;
    d = *(ptr+2);
    ptr++;
    e = ptr - tab;
    f = *ptr - *tab;
    printf("%d\n", a); // prints 12
    printf("%d\n", b); // prints 400
    printf("%d\n", c); // prints 32
    printf("%d\n", d); // prints 500
    printf("%d\n", e); // 3
    printf("%d\n", f); // 399
	return 0;
}