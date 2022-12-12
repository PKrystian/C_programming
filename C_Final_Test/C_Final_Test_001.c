#include <stdio.h>

int main() 
{
	int tab[5] = {10, 20, 30, 40, 50};
    printf("%d\n", *tab); // prints 1st value of array, 10 
    printf("%d\n", tab); // prints address of array, 2293584
    printf("%d\n", tab[1]); // prints 2nd value of array, 20
    printf("%d\n", *(tab+4)); // prints 5th value of array, 50
    printf("%d\n", *tab+4); // prints 1st + 4 value of array, 14
    printf("%d\n", tab+1); // prints next address of array, 2293588
	return 0;
}