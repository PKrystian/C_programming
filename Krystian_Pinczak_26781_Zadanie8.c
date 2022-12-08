#include<stdio.h>

char *merge_function(char b[], char c[], int arr2size)
{
	char a[] = { 'a','b','c' };
	int arr1size = sizeof(a)/sizeof(*a);
	int arr_fullsize_f = arr1size + arr2size;
	int i, j;
    int arr_fullsize = arr1size + arr2size;
	for (i = 0; i < arr1size; i++) 
    {
        c[i] = a[i];
    }
    for (i = 0, j = arr1size; j < arr_fullsize && i < arr2size; i++, j++)
    {
        c[j] = b[i];
    }
    return c;
}
int main()
{
    char b[] = { 'x','y','z', 'M' };
	int i;
	int arr2size = sizeof(b)/sizeof(*b);
    char c[7];
    merge_function(b,c,arr2size);
    int arr_fullsize = sizeof(c)/sizeof(*c);
    for (i = 0; i < arr_fullsize; i++) 
    {
        printf("%c ", c[i]);
    }
    return 0;
}