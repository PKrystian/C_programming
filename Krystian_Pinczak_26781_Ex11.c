#include<stdio.h>

int print(int w, int h, int *arr)
{
    int i, j;
    for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			printf("%d ", *((arr+i*h) + j));
		}
		printf("\n");
	}
}
int main()
{
    int w = 3, h = 3;
    int arr[][3] = 
	{
		{10, 15, 20}, 
		{40, 60, 80}, 
		{100, 80, 60}
	};
    print((int *)arr, w, h);
    return 0;
}