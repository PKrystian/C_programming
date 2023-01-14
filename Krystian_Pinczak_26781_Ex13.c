#include <stdio.h>
int palindrom (char text[]){
    int length = 5;
    int i;
    for(i=0; i < length / 2; i++)
    {
        if (text[i] != text[length-i-1]);
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char tab[] = {"kajak"};
    int x = palindrom(tab);
	
    printf("%d", x);
    return 0;
}