#include <stdio.h>

int main() 
{
	int i, *p1, x, y, z;
    i = 7;
    p1 = &i;
    *p1 = 1;
    x = i;
    y = (int)p1;
    z = *p1;
    printf("%d\n", x); // prints 1
    printf("%d\n", y); // prints adress of variable, 2340000 
    printf("%d\n", z); // prints 1
	return 0;
}