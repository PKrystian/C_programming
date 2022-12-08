#include<stdio.h>  

int array_function(int arr[],int size)
{    
	int min=arr[0];    
	int i=0;    
	for(i=1;i<size;i++)
	{    
		if(min>arr[i])
		{    
			min=arr[i];    
		}    
	}   
	return min;    
}   
int main(){ 
	int i=0,min=0;    
	int numbers[]={2423,24,642,94,13,8};    
	min=array_function(numbers,sizeof(numbers)/sizeof(*numbers));    
	printf("Minimal value of array is:  %d \n",min);    
	return 0;  
}   