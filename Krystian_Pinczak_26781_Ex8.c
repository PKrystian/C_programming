#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *merge_function(char a[], char b[])
{
	int i, j;
    char *c = malloc(strlen(a)+ strlen(b) + 1);
	for (i = 0; a[i] != '\0'; i++) 
    {
        c[i] = a[i];
    }
    for (j = 0; b[j] != '\0'; i++, j++) 
    {
        c[i] = b[j];
    }
    c[i] = '\0';
	return c;
}
int main()
{
	char a[] = { 'a','b','c', '\0' };
    char b[] = { 'x','y','z', 'M', 'j','d','z', 'M', '\0'  };
    char *d = merge_function(a,b);
    printf("%s ", d);
    return 0;
}
/* Version with overload
#include <stdio.h>
#include <string.h>

char *merge_function(char a[], char b[])
{
	int i, j;
	int fulllen = strlen(a) + strlen(b);
	char temp[1800];
	char c[fulllen+1];
	char temp2[2000];
	for (i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; b[j] != '\0'; i++, j++)
    {
        c[i] = b[j];
    }
    c[i] = '\0';
	return c;
}
int main()
{
	char a[] = { 'a','b','c', '\0' };
    char b[] = { 'x','y','z', 'M', 'j','d','z', 'M', '\0'  };
    char *c = merge_function(a,b);
    printf("%s ", c);
    return 0;
} */