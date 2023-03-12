#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
   printf("Poczatek\n");
   execlp("ls", "ls", "-a", NULL);
   printf("Koniec\n");
}