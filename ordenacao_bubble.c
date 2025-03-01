 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

void preencher_vetor(int v[], int n){
    for(int i=0; i<n;i++){
        v[i] = rand();
    }
}

void exibir_vetor(int v[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("\n");
}

void bubble_sort(int v[], int n){
    for(int i=0;i< n; i++){
        for(int j=0; j< n-i-1; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main (){
    int *v; 
    int n;

    srand(time(NULL));

    printf("Qual a quantidade de vetores? \n");
    scanf("%d", &n);

    v = (int *) malloc (n*sizeof(int));

    preencher_vetor(v, n);
    printf("Vetores: \n");
    exibir_vetor(v, n);

    printf("Apos o Bubble Sort: \n");
    bubble_sort(v, n);
    exibir_vetor(v, n);

    return 0;
}





