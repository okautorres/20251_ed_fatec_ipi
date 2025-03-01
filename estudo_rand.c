#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int tempo = rand();
    int numero = rand() % 11;
    printf("%d \n", tempo);
    printf("Numero de 0 a 10: %d\n", numero);
    
}