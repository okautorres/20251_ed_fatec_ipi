#include <stdio.h>
#include <stdlib.h>

//Autor: Kauan Torres | 3 Semestre ADS Noturno - Fatec Ipiranga

struct item {
    int valor;
    struct item *proximo;//ou na pilha: como anterior, somente lembrando.

} typedef item;

struct fila {
    item *primeiro;
} typedef fila;


struct pilha {
    item *topo;
} typedef pilha;

void adicionarFila(fila *f){
    int qtNumeros, n;
    printf("Quantos numeros ira inserir na fila ?\n");
    scanf("%i",&qtNumeros);
    for(int i = 0; i<qtNumeros; i++){

        item *novo = (item*)malloc(sizeof(item));

        printf("Digite o numero %i: ",i+1);
        scanf("%d",&novo->valor);

        novo->proximo = NULL;

        if(f->primeiro == NULL){
            f->primeiro = novo;
        } else{
            item *aux = f->primeiro;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
        
        printf("Numero %i adicionado a fila\n", novo->valor);

    }

}

void removerFila(fila *f){
    if(f->primeiro == NULL){
        printf("Nao ha numeros na lista");
    } else {
        f->primeiro = f->primeiro->proximo;
    }
}

void listarFila(fila *f){
    item *aux = f->primeiro; 
    printf("\n Fila: \n");
    while(aux != NULL){
        printf("%i ", aux->valor);
        aux = aux->proximo;
    }
}

void removerTodos(fila *f) {
    while (f->primeiro != NULL) {
        removerFila(f); 
    }
    printf("\n Todos os itens foram removidos\n");
}

void push(fila *f, pilha *p){
    while(f->primeiro != NULL){
        item *novo = (item *)malloc(sizeof(item));
        novo->valor = f->primeiro->valor;
        novo->proximo = p->topo; //novo->anterior = p->topo 
        p->topo = novo;
        removerFila(f);
    }
}

void listarPilha(pilha *p){
    item *aux = p->topo;
    printf("\nPilha: \n");
    while(aux != NULL){
        printf("%i ", aux->valor);
        aux = aux->proximo;
    }

}



int main() {
    fila f = {NULL};
    pilha p = {NULL};
    adicionarFila(&f);
    listarFila(&f);
    push(&f, &p);
    listarPilha(&p);
    
}