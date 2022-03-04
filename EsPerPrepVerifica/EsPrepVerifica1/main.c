#include <stdio.h>
#include <stdlib.h>
#define NC 100

/*
Scrivere un programma per leggere e stampare
array bidimensionale di interi. Il programma richiede all’utente il numero
di righe e di colonne dopo di che richiede ad uno ad uno gli elementi da inserire
nell'array. Il programma inoltre deve gestire dinamicamente l'allocazione
e la deallocazione della memoria.
*/

void stampaMatrice(int** mat, int nr, int nc){
    for(int r = 0; r < nr; r++) {
        for(int c = 0; c < nc; c++) {
            printf("\t %d", mat[r][c]);
        }
        printf("\n");
    }
}

int main() {
    int nr, nc, r, c;
    printf("Inserisci numero di righe: ");
    scanf("%d",&nr);
    printf("Inserisci numero di colonne: ");
    scanf("%d",&nc);

    int **mat = (int **)malloc(nr *sizeof(int*));

    for(int k = 0; k < nr; k++) {
        mat[k] = (int *)malloc(nc *sizeof(int));
    }

    for(r = 0; r < nr; r++) {
        for(c = 0; c < nc; c++) {
            printf("Inserisci il numero nella cella [%d][%d]: ",r,c);
            scanf("%d",&mat[r][c]);
        }
    }

    //printf("%d",sizeof(int));
    //printf("%d",sizeof(int*));

    stampaMatrice(mat,nr,nc);

    free(mat);
    system("PAUSE");
    return 0;
}
