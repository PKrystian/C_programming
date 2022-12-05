#include<stdio.h>  

int array_function(float *arr,int size){  
	float temp;
	int i;
	int j;
	for (i = 0; i < size-1; i++) {     
        for (j = i+1; j < size; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }      
}   
    
int main(){    
	int i=0;    
	float numbers[]={223.232,24.85,642.234,94.1,13.76,8.9,423.2,23.0,4324.97}; 
	int size = sizeof(numbers)/sizeof(*numbers);
	printf("Version before: \n");
	for (i = 0; i < size; i++) {     
    	printf("%7.3f ", numbers[i]);    
    }  
    printf("\n");
	array_function(numbers,size);  
	printf("Version after: \n");
	for (i = 0; i < size; i++) {     
    	printf("%7.3f ", numbers[i]);    
    }  
	return 0;  
}    
