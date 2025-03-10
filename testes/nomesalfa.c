#include <stdio.h>
#include <string.h>

int main(){
    int n, t;
    char nomes[50][50];
    char temp[50];
    printf("Digite a quantidade de nomes que serao digitados:\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o nome:\n");
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) { 
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {  
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
    



    printf("Nomes:\n");
    for(int i = 0; i < n; i++){
        printf("%s\n", nomes[i]);
    }

    return 0;
}
