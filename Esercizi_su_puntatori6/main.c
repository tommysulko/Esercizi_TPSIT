#include <stdio.h>
#include <stdlib.h>

int main() {
    int **mat;
    int nR, nC, r, c;
    int k;

    printf("Inserisci numero righe: ");
    scanf("%d", &nR);

    printf("Inserisci numero colonne: ");
    scanf("%d", &nC);

    mat = (int **) malloc (nR * sizeof(int*));

    for(k = 0; k < nR; k++) {
        *(mat + k) = (int *) malloc (nC * sizeof(int));
    }

    for(r = 0; r < nR; r++) {
        for(c = 0; c < nC; c++) {
            printf("Inserisci un valore nella cella [%d][%d]: ", r, c);
            scanf("%d", ((*mat)[r]) + c);
        }
    }

    for(r = 0; r < nR; r++) {
        for(c = 0; c < nC; c++) {
            printf("%d ", ((*mat)[r]) + c);
        }
        printf("\n");
    }

    free(mat);
    system("pause");
    return 0;
}
