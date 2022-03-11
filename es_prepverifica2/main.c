#include <stdio.h>
#include <stdlib.h>

//trovare il maggiore in una coda

typedef struct nodo { // definisco la struttura Nodo con il next e la variabile
    int num;
    struct nodo * next; //puntatore al nodo successivo
} Nodo;

Nodo * formattaLista() {
    int num;
    int n;

    printf("Quanti numeri vuoi inserire? "); //chiedo all'utente il numero di numeri da inserire
    scanf("%d", &n);

    Nodo* head; //definisco la head

    if(n > 0) {
        head = (Nodo*)malloc(sizeof(Nodo)); //alloco la pila in caso il numero dato in input sia maggiore di zero
    } else {
        head = NULL; //se non è maggiore di zero non alloco
    }

    Nodo * r = head; // assegno la head alla variabile r
    Nodo * c;

    for(int k = 0; k < n; k++) {
        printf("Dammi il %d numero: ", k + 1); //chiedo in input il carattere
        fflush(stdin); //pulisco la tastiera dell'input
        scanf("%d", &r->num); //ricevo il carattere e lo posiziono tramite la head nel carattere della struttura Nodo

        num = NULL;

        if(k < n - 1) {
            num = (Nodo*) malloc (sizeof(Nodo));
        }
        r->next = num;
        r = num;
    }
    return head;
}

void stampaLista(Nodo * h, int*somma) {
    if(h!=NULL) {
        if(h->num%2 == 0) {
            *somma+=h->num;
            printf("%d\n",h->num);
        }
        stampaLista(h->next,&somma);
    }
}

int main(){
    int somma = 0;
    Nodo *head=formattaLista();
    stampaLista(head,&somma);
    printf("\nLa somma vale: %d",&somma);
    return 0;
}
