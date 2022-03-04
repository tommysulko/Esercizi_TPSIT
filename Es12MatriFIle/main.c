#include <stdio.h>
#include <stdlib.h>
#define NR 5
#define NC 3

void leggiDaFile(char nomeFile[],float mat[][NC], int nMax, int *n) {
    int r = 0,c = 0;
    FILE *fp;

    fp = fopen( nomeFile, "r");
    if(fp == NULL) {
        printf("il file %s non esiste\n", nomeFile);
        *n = 0;
    } else {
        while(k < NR && fscanf(fp,"%f", &mat[r][0]) != EOF){
            for(c = 1; c < nMax,c++){
                fscanf(fp,"%f", &mat[r][c]);
            }
            r++;
        }
        fclose(fp);
        *n = r;
    }
}

void stampaMat(float mat[][NC],int NR,int NC){
    int r,c;

    for(r = 0; r < NR; r++){
        for(c = 0; c < NC; c++){
            printf("%-3.2f", mat[r][c]);
            printf("\n");
        }
    }
}

int main() {
    float mat[NR][NC];
    int nr;

    leggiDaFile("Matrice.txt",mat,NC,&nr);
    stampaMat(mat,nr,NC);

    system("PAUSE");
    return 0;
}
