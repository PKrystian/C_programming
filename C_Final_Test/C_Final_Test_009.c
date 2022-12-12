#include <stdio.h>

int funkcja(char *s)
{
    int i;
    for (i=0; s[i] != 'x'; i++);
    s[i] = 0;
    return i;
}

main()
{
    char a[20] = "abcdexfghij";
    int x;
    x = funkcja(a);
    printf("%d\n", x); // prints 5
    printf("%s", a); // prints abcde
}