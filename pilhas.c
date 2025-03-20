#include <stdio.h>
#include <stdlib.h>

struct item {
    int codigo;
    struct item *proximo;
} typedef item;

struct pilha {
    item *topo;
} typedef pilha;

//adicionar um novo elemento no topo da pilha LIFO 
void push(pilha *p){
    item *novo = (item*)malloc(sizeof(item)); //alocação de um novo item na memoria
    novo->proximo = NULL; // (*novo).proximo = NULL
    printf("\nPUSH\ninforme um numero para o novo item:");
    scanf("%i", &novo->codigo);
    if(p->topo!=NULL)
    {
        novo->proximo = p->topo;
    }
    p->topo = novo;
    printf("\nnovo item aciodionado: %x", novo);
}

//remove o topo da pilha
void pop(pilha *p){
    if(p->topo==NULL){
        printf("\nPILHA VAZIA");
    } else {
        item *aux  = p->topo;
        p->topo = p->topo->proximo;
        printf("\nPOP\ncodigo=%iend=%x", aux->codigo, aux);
        free(aux); //limpa a memoria em um endereço de ponteiro    
    }
}

void topo(pilha *p){
    if(p->topo==NULL){
        printf("\nPILHA VAZIA!!!");
    } else {
        printf("\nTOPO\ncodigo=%i, proximo=%x, end=%x", 
        p->topo->codigo, p->topo->proximo, p->topo);    
    }
}

int main(){
    pilha p1 = {NULL};
    
    push(&p1);
    push(&p1);
    push(&p1);
    topo(&p1);
    pop(&p1);
    pop(&p1);
    topo(&p1);
    pop(&p1);
    pop(&p1);

    return 0;

}