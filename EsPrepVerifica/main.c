#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
Esercizio non funzionante
*/

int chiediDim(){
    int val;

    do{
        printf("Inserisci il numero di elementi: ");
	scanf("%d", &val);
        if(val <= 0){
            printf("Inserire un numero maggiore di zero \n");
        }
    } while(val <= 0);

    return val;
}


void caricaVettore(float v[],int n) {
    int k;

    for(k = 0; k < *(v+n); k++) {
        printf("inserire nella cella [%d] =",k);
        scanf("%f",(v+k));
    }
}

void ripetitivi(float vett[],int n,float *somDiv){
    int k;
    int x,cont=0;;

    for(k = 0; k < *(vett+n);k++){
        x = *(vett+k);
        for(int j = 0; j < *(vett+n); j++){
            if(x == *(vett+j) ){
                cont++;
            }
        }
        if(cont == 0){
            *somDiv = *somDiv + x;
        } else {
            printf("Valore ripetuto: %2.f, %d volte", *(vett+k), cont);
        }
        cont = 0;
    }

}

int main() {
    float sommaDiv = 0;
    int n;
    n = chiediDim();
    float *vett=(float *)malloc(n*sizeof(char));

    caricaVettore(vett, n);
    ripetitivi(vett,n, &sommaDiv);

    printf("La somma dei numeri che non si ripetono e': \n", sommaDiv);
    system("PAUSE");
    return 0;
}
