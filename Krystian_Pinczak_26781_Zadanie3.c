#include <stdio.h>

// Wersja referencyjna (c++)
//void zamiana(float &x, float &y) {
//	float temp = x;
//	x = y;
//	y = temp;
//
//}

void zamiana(float *x, float *y) {
	float temp = *x;
	*x = *y;
	*y = temp;


}

int main() {
	float a = 2.5, b = 4.3;
	zamiana(&a, &b); // x = a; y = b;
	printf("a = %f, b = %f\n", a, b);
}