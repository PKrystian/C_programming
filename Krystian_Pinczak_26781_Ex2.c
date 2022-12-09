#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

int i_global = 3;
char c_global = 4;
float f_global = 2.5;
double d_global = 3.1;
short s_global = 1;
long l_global = 5;
int size_i_global = sizeof(i_global);
int size_c_global = sizeof(c_global);
int size_f_global = sizeof(f_global);
int size_d_global = sizeof(d_global);
int size_s_global = sizeof(s_global);
int size_l_global = sizeof(l_global);
int main() 
{
	int i_local = 4;
	char c_local = 1;
	float f_local = 3.5;
	double d_local = 2.1;
	short s_local = 5;
	long l_local = 3;
	static int i_static = 1;
	static char c_static = 5;
	static float f_static = 5.2;
	static double d_static = 1.3;
	static short s_static = 3;
	static long l_static = 4;
	int size_i_local = sizeof(i_local);
	int size_c_local = sizeof(c_local);
	int size_f_local = sizeof(f_local);
	int size_d_local = sizeof(d_local);
	int size_s_local = sizeof(s_local);
	int size_l_local = sizeof(l_local);
	int size_i_static = sizeof(i_static);
	int size_c_static = sizeof(c_static);
	int size_f_static = sizeof(f_static);
	int size_d_static = sizeof(d_static);
	int size_s_static = sizeof(s_static);
	int size_l_static = sizeof(l_static);
	printf("The size of int global data type is : %d%s", size_i_global, " bytes , ");
	printf("i_global Address: %p\n", &i_global );
	printf("The size of char global data type is : %d%s", size_c_global, " bytes , ");
	printf("c_global Address: %p\n", &c_global );
	printf("The size of float global data type is : %d%s", size_f_global, " bytes , ");
	printf("f_global Address: %p\n", &f_global );
	printf("The size of double global data type is : %d%s", size_d_global, " bytes , ");
	printf("d_global Address: %p\n", &d_global );
	printf("The size of short global data type is : %d%s", size_s_global, " bytes , ");
	printf("s_global Address: %p\n", &s_global );
	printf("The size of long global data type is : %d%s", size_l_global, " bytes , ");
	printf("l_global Address: %p\n", &l_global );
	printf("\n");
	printf("The size of int static data type is : %d%s", size_i_static, " bytes , ");
	printf("i_static Adress : %p\n", &i_static );
	printf("The size of char static data type is : %d%s", size_c_static, " bytes , ");
	printf("c_static Address: %p\n", &c_static );
	printf("The size of float static data type is : %d%s", size_f_static, " bytes , ");
	printf("f_static Address: %p\n", &f_static );
	printf("The size of double static data type is : %d%s", size_d_static, " bytes , ");
	printf("d_static Address: %p\n", &d_static );
	printf("The size of short static data type is : %d%s", size_s_static, " bytes , ");
	printf("s_static Address: %p\n", &s_static );
	printf("The size of long static data type is : %d%s", size_l_static, " bytes , ");
	printf("l_static Address: %p\n", &l_static );
	printf("\n");
	printf("The size of int local data type is : %d%s", size_i_local, " bytes , ");
	printf("i_local Address: %p\n", &i_local );
	printf("The size of char local data type is : %d%s", size_c_local, " bytes , ");
	printf("c_local Address: %p\n", &c_local );
	printf("The size of float local data type is : %d%s", size_f_local, " bytes , ");
	printf("f_local Address: %p\n", &f_local );
	printf("The size of double local data type is : %d%s", size_d_local, " bytes , ");
	printf("d_local Address: %p\n", &d_local );
	printf("The size of short local data type is : %d%s", size_s_local, " bytes , ");
	printf("s_local Address: %p\n", &s_local );
	printf("The size of long local data type is : %d%s", size_l_local, " bytes , ");
	printf("l_local Address: %p\n", &l_local );
	return 0;
}