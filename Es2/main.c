#include <stdio.h>
#include <stdlib.h>
#define LUNG 50
#define MAX_STUDENTI 3

typedef struct {
    char nome[LUNG];
    char cognome[LUNG];
    float votoIta;
    float votoMate;
    float votoInfo;
} Studente;

void inserimentoDati(Studente v[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("Inserisci nome sudente: ");
        scanf("%s", v[k].nome);
        printf("Inserisci cognome sudente: ");
        scanf("%s", v[k].cognome);
        printf("Inserisci voto Italiano: ");
        scanf("%f", &v[k].votoIta);
        printf("Inserisci voto Matematica: ");
        scanf("%f", &v[k].votoMate);
        printf("Inserisci voto Informatica: ");
        scanf("%f", &v[k].votoInfo);
        printf("\n");
    }
}

void mediaMaggiore(Studente v[], int n) {
    int k;
    float mediaIta, mediaMate, mediaInfo;
    float sommaIta, sommaMate, sommaInfo;

    sommaIta = 0;
    sommaMate = 0;
    sommaInfo = 0;

    for(k = 0; k < n; k++) {
        sommaIta = sommaIta + v[k].votoIta;
        sommaMate = sommaMate + v[k].votoMate;
        sommaInfo = sommaInfo + v[k].votoInfo;
    }

    mediaIta = sommaIta / n;
    mediaMate = sommaMate / n;
    mediaInfo = sommaInfo / n;

    if(mediaIta > mediaMate) {
        if(mediaIta > mediaInfo) {
            printf("La meteria con media piu' alta e': Italiano[%.2f]\n", mediaIta);
        } else {
            printf("La meteria con media piu' alta e': Informatica[%.2f]\n", mediaInfo);
        }
    } else if(mediaMate > mediaInfo) {
        printf("La meteria con media piu' alta e': Matematica[%.2f]\n", mediaMate);
    } else {
        printf("La meteria con media piu' alta e': Informatica[%.2f]\n", mediaInfo);
    }
}
int main() {
    Studente v[MAX_STUDENTI];

    inserimentoDati(v, MAX_STUDENTI);
    mediaMaggiore(v, MAX_STUDENTI);

    system("pause");
    return 0;
}
