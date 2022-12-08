#include<stdio.h>  

int array_function(int arr[],int size, int arrhelp[])
{    
	int min=arr[0];
	int max=arr[0];    
	int i=0;    
	for(i=1;i<size;i++)
	{    
		if(min>arr[i])
		{    
			min=arr[i];    
		}    
	}
	for(i=1;i<size;i++)
	{    
		if(max<arr[i])
		{    
			max=arr[i];    
		}    
	}   
	arrhelp[0] = min;  
	arrhelp[1] = max;   
}   
int main()
{ 
	int i=0,min=0,max=0;    
	int numbers[]={2423,24,642,94,13,8,423,23,324324}; 
	int arrhelp[2];
	array_function(numbers,sizeof(numbers)/sizeof(*numbers), arrhelp);  
	printf("Minimal value of array is:  %d \n",arrhelp[0]);   
	printf("Maximum value of array is:  %d \n",arrhelp[1]);   
	return 0;  
}    