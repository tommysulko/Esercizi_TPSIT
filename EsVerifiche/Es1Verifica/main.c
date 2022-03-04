#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
Author: Tommaso Sulkuqi

Scrivere un programma per leggere e stampare array bidimensionale di float. Il
programma richiede all’utente il numero di righe e di colonne dopo di che richiede ad
uno ad uno gli elementi da inserire nell&#39;array.  Il programma inserisce in un secondo
array unidimensionale i numeri più grandi di ogni riga. Allocare e deallocare l’array
restituito.
*/

void stampaMatrice(float** mat, int nr, int nc){
    for(int r = 0; r < nr; r++) {
        for(int c = 0; c < nc; c++) {
            printf("\t %2.f", mat[r][c]);
        }
        printf("\n");
    }
}

void stampaVett(float* vett, int n){
    for(int k = 0; k < n; k++) {
        printf("%2.f | ", *(vett+k));
    }

}

int main() {
    int nr,nc,i=0;
    float max;

    printf("Inserisci il numero di righe: "); //chiedo in input il numero di righe e colonne.
    scanf("%d",&nr);
    printf("Inserisci il numero di colonne: ");
    scanf("%d",&nc);

    float **mat = (float **)malloc(nr*sizeof(float*)); //allocazione dinamica di matrice float

    for(int k = 0; k < nr; k++) {
        mat[k] = (float *)malloc(nc *sizeof(float));
    }

    //chiedo in input i numeri
    for(int r = 0;r < nr; r++){
        for(int c = 0; c < nc; c++){
            printf("Inserisci il numero che vuoi della cella[%d][%d]:",r,c);
            scanf("%f", &mat[r][c]);
        }
    }

    //stampa matrice
    stampaMatrice(mat,nr,nc);



    float* vett = (float *)malloc(nr *sizeof(float)); //allocazione dinamica di vettore float


    //ciclo la matrice e al piu grande della riga lo assegno a vett
    for(int r = 0;r < nr; r++){
            max = mat[r][0];
        for(int c = 0; c < nc; c++){
            if(max < mat[r][c]){
                max = mat[r][c];
                *(vett+i) = max;
            }
        }
            i++;
    }
    //stampo il vettore
    stampaVett(vett,nr);

    free(vett);
    free(mat);
    system("PAUSE");
    return 0;
}
