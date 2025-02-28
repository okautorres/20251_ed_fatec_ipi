#include <stdio.h>

int main() {
    int n, i, j, continuar, a=1, espacos =1;


    do{
        printf("Digite um numero impar:\n");
        scanf("%d", &n);

        if(n%2 == 0){
            do {
                printf("Precisa ser um numero impar\n");
                scanf("%d", &n);
            } while( n%2 == 0);
        }

        int qtLinhas = (n+1)/2;

        for(j=1; j <= qtLinhas; j++){
            for(i=a; i <= n; i++){
                printf("%i", i);
            }
            printf("\n");
            for(i=0; i < espacos; i++){
                printf(" ");
            }
            espacos++;
            a++;
            n--;
        }




        printf("\nDeseja continuar ? Digite 1 para continuar\n 0 - NAO\n 1 - SIM \n");
        scanf("%i", &continuar);

        espacos = 1;
        a = 1; 
        

    } while (continuar == 1);

    printf("Obrigado por utilizar!\n");
    return 0;
}
