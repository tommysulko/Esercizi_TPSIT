#include <stdio.h>
#include <stdlib.h>
#define LUNG 50
#define MAX_STUD 3

typedef struct {
    char nome[LUNG];
    char cognome[LUNG];
    float italiano;
    float matematica;
    float informatica;
} Studente;

void caricaVett(Studente v[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("Inserisci il nome dello studente: ");
        scanf("%s", v[k].nome);
        printf("Inserisci il cognome dello studente: ");
        scanf("%s", v[k].cognome);
        printf("Inserisci il voto di Italiano: ");
        scanf("%f", &v[k].italiano);
        printf("Inserisci il voto di Matematica: ");
        scanf("%f", &v[k].matematica);
        printf("Inserisci il voto di Informatica: ");
        scanf("%f", &v[k].informatica);
        printf("\n");
    }
}

void mediaVoti(Studente v[], int n) {
    int k;
    float mediaIta, mediaMate, mediaInfo;
    float sommaIta, sommaMate, sommaInfo;

    sommaIta = 0;
    sommaMate = 0;
    sommaInfo = 0;

    for(k = 0; k < n; k++) {
        sommaIta = sommaIta + v[k].italiano;
        sommaMate = sommaMate + v[k].matematica;
        sommaInfo = sommaInfo + v[k].informatica;
    }

    mediaIta = sommaIta / n;
    mediaMate = sommaMate / n;
    mediaInfo = sommaInfo / n;

    if(mediaIta > mediaMate) {
        if(mediaIta > mediaInfo) {
            printf("La media piu' alta e' italiano con:[%.2f]\n", mediaIta);
        } else {
            printf("La media piu' alta e' informatica con:[%.2f]\n", mediaInfo);
        }
    } else if(mediaMate > mediaInfo) {
        printf("La media piu' alta e' matematica con:[%.2f]\n", mediaMate);
    } else {
        printf("La media piu' alta e' informatica con:[%.2f]\n", mediaInfo);
    }
}

int main() {
    Studente v[MAX_STUD];

    caricaVett(v, MAX_STUD);
    mediaVoti(v, MAX_STUD);

    system("PAUSE");
    return 0;
}
