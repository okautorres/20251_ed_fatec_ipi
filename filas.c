#include <stdlib.h>
#include <stdio.h>

struct item{
    int cod;
    struct item *next;
} typedef item;

struct queue{
    item *first;
} typedef queue;

void addcod(queue *q){
    item *new = (item*)malloc(sizeof(item));
    printf("\nInforme o codigo:");
    scanf("%i", &new->cod);
    new->next = NULL;
    if(q->first == NULL){
        q->first = new;
    } else {
        item *aux = q->first;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = new;
    }
    printf("\nItem adicionado ao fim da fila %p\n", new);
}

void removecod(queue *q){
    if(q->first == NULL){
        printf("\nFILA VAZIA!!!!!");
    } else {
        item *temp = q->first;
        printf("Item removido: %d\n", temp->cod);  
        q->first = q->first->next;        
        free(temp); 
    }
}

void list(queue *q){
    item *aux = q->first;
    while(aux != NULL){
        printf("\nitem %p => %i \n", aux, aux->cod);
        aux = aux->next;
    }
}

int main()
{
    queue queue1 = {NULL};
    addcod(&queue1);
    addcod(&queue1);
    addcod(&queue1);
    list(&queue1);
    removecod(&queue1);
    removecod(&queue1);
    list(&queue1);
    addcod(&queue1);
    addcod(&queue1);
    removecod(&queue1);
    list(&queue1);
    return 0;
}
