#include<stdio.h>
int character_to_unsigned_int(char char_input[]){
	unsigned int i;
	sscanf(char_input, "%d", &i);
	return i;
}
int main(){
	char char_input[] = {'1', '7', '3', '9', '0'};
	unsigned int i;
	i = character_to_unsigned_int(char_input);
	printf("%d\n", i);
	return 0;
}
