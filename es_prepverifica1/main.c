#include <stdio.h>
#include <stdlib.h>

//trovare il maggiore in una coda

typedef struct nodo { // definisco la struttura Nodo con il next e la variabile
    int num;
    struct nodo * next; //puntatore al nodo successivo
} Nodo;

Nodo * formattaLista(Nodo** tail) {
    int n;
    printf("Quanti numeri vuole inserire: ");
    scanf("%d", &n);
    int num;
    Nodo * head=NULL;
    Nodo *r=(Nodo*)malloc(sizeof(Nodo));
    Nodo * cur=head;
    for(int k=0; k< n; k++) {
        printf("Dammi un numero: ");
        scanf("%d", &num);
        if(r==NULL)
            r=(Nodo*)malloc(sizeof(Nodo));
        r->num=num;
        if(head==NULL) {
            head= r;
            cur=r;
        }
        cur->next=r;
        cur=r;
        cur->next=NULL;
        r=NULL;
    }
    *tail=cur;
    return head;
}

void stampaLista(Nodo * h, int*somma) {
    if(h!=NULL) {
        if(h->num%2 !=0) {
            *somma+=h->num;
            printf("%d\n",h->num);
        }
        stampaLista(h->next,&somma);
    }
}

int main(){
    int somma = 0;
    Nodo *tail=NULL;
    Nodo *head=formattaLista(&tail);
    stampaLista(head,&somma);
    printf("\nLa somma vale: %d",&somma);
    return 0;
}
