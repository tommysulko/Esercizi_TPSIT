#include <stdio.h>
#include <stdlib.h>
#define NC 100

void stampaMatrice(int mat[][NC], int nr, int nc){
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

    int **mat = (int **)malloc(nr *sizeof(int));

    for(int k = 0; k < nr; k++) {
        mat[k] = (int *)malloc(nc *sizeof(int));
    }

    for(r = 0; r < nr; r++) {
        for(c = 0; c < nc; c++) {
            printf("Inserisci il numero da inserire nella cella [%d][%d]: ",r,c);
            scanf("%d",&mat[r][c]);
        }
    }
    stampaMatrice(mat,nr,nc);

    free(mat);
    system("PAUSE");
    return 0;
}
