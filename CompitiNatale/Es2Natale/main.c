#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define MAX 50

/*Considerate una sequenza di interi letti da input e definite una funzione C che li
stampa in modo tale che tutti i pari precedano i dispari, nello stesso ordine in cui vengono
letti.
Ad esempio, se la sequenza è:
1 , 20 , 35 , 40 , 62 , 51 , 66
La stampa che si vuole ottenere è;
20 , 40 , 62 , 66 , 1 , 35 , 51*/

char FunzionePop(char data,int stack,int top) {
    if(!isempty()) {

        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Stack vuoto.\n");
    }
}


void FunzionePush(char data,int stack,int top) {
    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Stack Pieno.\n");
    }
}


void caricaVett(int vett[]) {
    int k=0,num;

    for(k=0; k<DIM; k++) {
        printf("inserisci l'elemento %d :",k);
        scanf("%d",&vett[k]);
    }
}

void PariDispari(int vett[],int stack,int top) {
    int k=0;

    for(k=0; k<DIM; k++) {
        if(vett[k]%2==0) {
            FunzionePush(vett[k],stack,intop);
        }
    }
    for(k=0; k<DIM; k++) {
        if(vett[k]%2!=0) {
            FunzionePop(vett[k],stack,top);
        }
    }
}


void stampaPila(int top) {
    int num;
    while(top>=0) {
        elemento = pop(stack[top]);
        printf(" %d \n",num);
    }
}

void main() {
    int stack[50];
    int top = -1;
    int vett[DIM];

    caricaVett(vett,int top);
    PariDispari(vett,int top);
    stampaPila(int top);

    return 0;
}
