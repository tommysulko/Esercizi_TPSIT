#include <stdio.h>
#include <stdlib.h>

void inserisciNum(float **mat){
    int x,y;
    printf("Inserisci la coordinata x su cui vuoi mettere il numero: ");
    scanf("%d",&x);
    printf("Inserisci la coordinata y su cui vuoi mettere il numero: ");
    scanf("%d",&y);

    float num;
    printf("Inserisci il numero che hai scelto: ");
    scanf("%d", &num);

    mat[x][y] = num;
}

void stampaMatrice(float **mat, int nr, int nc){
    for(int r = 0; r < nr; r++) {
        for(int c = 0; c < nc; c++) {
            printf("\t %.2f", mat[r][c]);
        }
        printf("\n");
    }
}

int main() {
    int nr, nc, k, r, c;
    printf("Inserisci numero di righe: ");
    scanf("%d",&nr);
    printf("Inserisci numero di colonne: ");
    scanf("%d",&nc);

    float **mat = (float **)malloc(nr *sizeof(float));

    for(k = 0; k < nr; k++) {
        mat[k] = (float *)malloc(nc *sizeof(float));
    }

    for(r = 0; r < nr; r++) {
        for(c = 0; c < nc; c++) {
            mat[r][c] = 0;
        }
    }
    stampaMatrice(mat,nr,nc);

    int num;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d",&num);

    for(int j = 0; j < num; j++){
        inserisciNum(mat);
    }
    stampaMatrice(mat,nr,nc);

    system("PAUSE");
    return 0;
}
