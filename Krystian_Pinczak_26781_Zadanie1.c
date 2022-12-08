#include <stdio.h>

int main() 
{
	float search_value;
	float array[] = { 2.1, 9.0, 4.2, 1.9, 6.4, 5.3, 8.5, 7.9 };
	unsigned size = sizeof(array)/sizeof(*array);
	unsigned search_index;
	float a;
	int i;
	printf("Write number to search in array: \n");
	scanf_s("%f", &search_value);
	for (i=0; i < size; i++) 
	{
		a = array[i];
		if (a == search_value) 
		{
			break;
		}
	}
	search_index = i+1;
	if (a == search_value) 
	{
		printf("Index of searching number is: %d\n", search_index);
	}
	else 
	{
		printf("Default (array[-1]): %f\n", array[-1]);
	}
	return 0;
}