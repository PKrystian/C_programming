#include<stdio.h>

void swap_function(float *x, float *y) 
{
	float temp = *x;
	*x = *y;
	*y = temp;
}
int main() 
{
	float a = 2.5, b = 4.3;
	swap_function(&a, &b);
	printf("a = %f, b = %f\n", a, b);
}