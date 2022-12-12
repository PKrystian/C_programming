#include <stdio.h>

int main() 
{
	int a[6] = {1, 2, 3, 4, 5, 6};
    int *ptr;
    ptr = a + 2;
    ptr[1] = *ptr + 10;
    ptr[2] = ptr[0] + 20;
    *a = *ptr;
    *ptr = a[1];
    printf("%d\n", a[0]); // prints 3
    printf("%d\n", a[1]); // prints 2
    printf("%d\n", a[2]); // prints 2
    printf("%d\n", a[3]); // prints 13
    printf("%d\n", a[4]); // prints 23
    printf("%d\n", a[5]); // prints 6
	return 0;
}