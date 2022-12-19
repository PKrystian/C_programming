#include<stdio.h>

int upper_case(char string_array[])
{
    int i = 0;
    for (i = 0; string_array[i]!='\0'; i++) 
    {
        if(string_array[i] >= 'a' && string_array[i] <= 'z') 
        {
            string_array[i] = string_array[i] - 32;
        }
    }
}
int main() 
{
    char string_array[500];
    printf("Enter char to upper case: ");
    fgets(string_array, sizeof(string_array), stdin);
    upper_case(string_array);
    printf("Char in upper case: %s", string_array);
    return 0;
}