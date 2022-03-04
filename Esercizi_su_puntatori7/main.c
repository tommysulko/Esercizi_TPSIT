#include <stdio.h>
#include <stdlib.h>

/*
Scrivere un programma che permette all’utente di inizializzare un array unidimensionale
di float e ( facendo uso dell’aritmetica dei puntatori:
- individui gli elementi con valore ripetuti
-sommi i numeri rimasti
*/

int chiediDim() {

    float dim;

    do {
        printf("Inserisci dimensione vettore:");
        scanf("%d", &dim);
    } while(dim < 0);
    return dim;
}

int ricerca(int *cosaCerco, int *v, int n) {

    int tro = 0;
    int k;

    for(k = 0; k < n; k++) {
        if(*cosaCerco == (v + k)) {
            tro++;
        }
    }
    return tro;
}

int main() {
    float *v;
    int n;
    int k;

    n = chiediDim();

    v = (float *) malloc (n * sizeof(float));

    for(k = 0; k < n; k++) {
        printf("Inserisci elemento: ");
        scanf("%f", (v + k));
    }

    int tro;
    float somma = 0;

    for(k = 0; k < n; k++) {
        tro = ricerca((v + k), v, n);

        if(tro > 1) {
            printf("Elemento %.2f trovato %d volte\n", *(v + k), tro);
        } else {
            somma = somma + *(v + k);
        }
    }

    printf("Somma elementi singoli: %.2f\n", somma);

    free(v);
    system("pause");
    return 0;
}
