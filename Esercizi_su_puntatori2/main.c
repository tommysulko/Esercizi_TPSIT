#include <stdio.h>
#include <stdlib.h>

/*Scrivere un programma che chieda n valori
interi (massimo 100), li collochi in un vettore e inverta il vettore
(scambiando il primo elemento con l'ultimo, il secondo con il penultimo, etc.).
Si usi i puntatori.*/

void caricaVett(int *v, int n) {
    for(int k=0; k< n; k++) {
        printf("Inserisci il numero della cella[%d]: ",k);
        scanf("%d", v+k);
    }
}

void invertiVett(int *v, int n) {
    int a;
    for(int k=0; k< n/2; k++) {
        a=*(v+k);
        *(v+k)=*(v+n-1-k);
        *(v+n-1-k)=a;
    }
}

void stampaVett(int *v, int n) {
    for(int k=0; k< n; k++) {
        printf("numero della cella [%d]: %d\n", k, *(v+k));
    }
}

int main() {
    int dim;

    printf("Inserisci quanti numeri vuoi inserire: ");
    scanf("%d", &dim);

    int *lung=(int*)malloc(dim*sizeof(int));

    caricaVett(lung, dim);
    invertiVett(lung, dim);
    stampaVett(lung, dim);

    return 0;
}
