#include <stdio.h>
#include <stdlib.h>
#define NPAZIENTI 20

/*Per descrivere i pazienti di una clinica disponi del seguente tipo di dato:
Paziente
typedef struct
{
char nome[256] ;
char cognome[256] ;
int matricola;
int pressione[2]; // minima e massima
int temperature[3]; // temperature della mattina e pomeriggio e sera
float parcella; // in euro quello che deve al dottore
} Paziente; // Iniziale maiuscola
Scrivi i Prototipi,le chiamate e il codice delle seguenti specifiche:
1. definisci una variabile rossi di tipo paziente;
2. definisci un array di 20 pazienti di nome clinica e di tipo paziente;
3. imposta una procedura (prototipo) con il corretto passaggio dei parametri che permetta ad
un utente di inserire tutti dati di un paziente che è stato passato alla procedura;
4. imposta una procedura (prototipo) che stampa la pressione e la temperatura di un
paziente;
5. imposta una procedura (prototipo) che dato l&#39;indirizzo dell&#39;array clinica ed il numero di
pazienti che vi sono sulla lista, calcola il saldo totale della clinica;
6. imposta tutte le chiamate nel main che realizzino in sequenza i punti precedenti;
7. facoltativo: ora completa l&#39;esercizio scrivendo il codice di tutte le procedure.*/

typedef struct {
    char nome[256] ;
    char cognome[256] ;
    int matricola;
    int pressione[2]; // minima e massima
    int temperature[3]; // temperature della mattina e pomeriggio e sera
    float parcella; // in euro quello che deve al dottore
} Paziente;

void nuovoPaziente(Paziente v[],int k) {
    if(k >= NPAZIENTI) {
        printf("Inserisci il nome del paziente: ");
        scanf("%s", v[k].nome);
        printf("Inserisci il cognome del paziente: ");
        scanf("%s", v[k].cognome);
        printf("Inserisci la matricola del paziente: ");
        scanf("%d", &v[k].matricola);
        printf("Inserisci la pressione min del paziente: ");
        scanf("%d", &v[k].pressione[0]);
        printf("Inserisci la pressione max del paziente: ");
        scanf("%d", &v[k].pressione[1]);
        printf("Inserisci la temperatura n.1 del paziente: ");
        scanf("%d", &v[k].temperature[0]);
        printf("Inserisci la temperatura n.2 del paziente: ");
        scanf("%d", &v[k].temperature[1]);
        printf("Inserisci la temperatura n.3 del paziente: ");
        scanf("%d", &v[k].temperature[2]);
        printf("Dammi la parcella: ");
        scanf("%f", &v[k].parcella);
    }
}

void stampa(int n, Paziente clinica[]) {
    for(int k = 0; k < n; k++) {
        printf("%s %s Ha come valori della temperatura: &d &d &d\. Ha come valori della Pressione: minima: %d, massima %d \n",clinica[k].cognome,clinica[k].nome,clinica[k].temperature[0],clinica[k].temperature[1],clinica[k].temperature[2],clinica[k].pressione[0],clinica[k].pressione[1]);
    }
}

float calcolaParcella(Paziente v[], int n) {
    float somma=0;
    for(int k=0; k< n; k++) {
        somma = somma + v[k].parcella;
    }

    return somma;
}

int main() {
    float somma = 0;
    Paziente rossi;
    int numeroPazienti = 0;
    Paziente clinica[NPAZIENTI];
    nuovoPaziente(clinica,numeroPazienti);
    numeroPazienti++;
    stampa(numeroPazienti,clinica);
    calcolaParcella(numeroPazienti,clinica);
    printf("La somma delle parcelle è: %2.f", somma);
    printf("\n");
    return 0;
}
