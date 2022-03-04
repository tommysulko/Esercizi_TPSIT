#include <stdio.h>
#include <stdlib.h>
#define MAXSTUDENTI 3
#define LUNG 20

/*
-definisca un tipo di dato Studente. Ogni studente è carattezzitato da un nome,un cognome e una matricola.

-acquisisca i dati di 10 studenti e,per ogni studente inserito, proceda ad un inserimento ordinato(lo scopo dell'esercizio
 è ordinare gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di
 ordinamento).

 -stampi i dati degli dtudenti.

 ES 2

 Definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle varie discipline: Italiano,Matematica
 Informatica.Si scriva una funzione in c che, a partire da un vettore di studenti fornito come argomento,determini la disciplina
 che ha la media piu alta.
*/

typedef struct{
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
}Studente;

void caricaDati(Studente v[],int n){
    int k;

    for(k=0;k<n;k++){
        fflush(stdin);
        printf("Inserisci il nome dello studente: ");
        scanf("%s",v->nome);

        fflush(stdin);
        printf("\nInserisci il cognome dello studente: ");
        scanf("%s",v->cognome);

        printf("\nInserisci il numero della matricola dell studente: ");
        scanf("%d",&v->matricola);
        printf("\n");
    }
}

void stampaDati(Studente v[],int n){
    int k;

    for(k=0;k<n;k++){

        printf("\nnome-cognome-matricola dello studente n.%d: %s-%s-%d",k+1,v[k].nome,v[k].cognome,v[k].matricola);
    }
}

int main() {
    Studente v[MAXSTUDENTI];

    caricaDati(v,MAXSTUDENTI);
    stampaDati(v,MAXSTUDENTI);

    system("PAUSE");
    return 0;
}
