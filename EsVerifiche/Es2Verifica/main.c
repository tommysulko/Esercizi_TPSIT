#include <stdio.h>
#include <stdlib.h>
#define DIM 100
#define NR 100
#define NC 100

/*
Author: Tommaso Sulkuqi

Scrivere un programma che legga da file verifica.dat:
- Numero di elementi dell’array di float (prima riga)
- Riempie un array con i valori float contenuti dalla seconda riga in poi

*/

void leggiDaFile(char nomeFile[],float **mat, int nMax, int *n,float *vett) {
    int r = 0,c = 0;
    FILE *fp;

    fp = fopen( nomeFile, "r");
    if(fp == NULL) {
        printf("il file %s non esiste\n", nomeFile);
        *n = 0;
    } else {
        int i=0,conta = 0;
        int k = 0;
        while(k < NR && fscanf(fp,"%f", &mat[r][0]) != EOF){
            for(c = 1; c < nMax;c++){
                fscanf(fp,"%f", &mat[r][c]);
                if(r > 1){
                    if(mat[r][c]%1 != 0){
                       *(vett+i) = mat[r][c];
                       i++;
                    }
                }else {
                    if(mat[r][c]%1 != 0){
                       conta++;
                    }

                }
            }
            r++;
        }
        fclose(fp);
        *n = r;
    }
    printf("Nella prima riga erano presenti &d float: ",conta);
}

int main() {

    float **mat = (float  **)malloc(NR *sizeof(float *));

    for(int k = 0; k < nr; k++) {
        mat[k] = (float  *)malloc(NC *sizeof(float));
    }

    float* vett = (float *)malloc(DIM *sizeof(float));
    leggiDaFile("verifica.dat",mat,NC,NR,vett);


    free(mat);
    free(vett);
    system("PAUSE");
    return 0;
}
