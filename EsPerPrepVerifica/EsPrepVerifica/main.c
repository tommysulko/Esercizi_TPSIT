#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
Scrivere un programma che permette all’utente di inizializzare un array unidimensionale
di float e ( facendo uso dell’aritmetica dei puntatori:


- individui gli elementi con valore ripetuti


-sommi i numeri rimasti
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

void ripetitivi(float *vett,float *vettUg,int n,float *somDiv){
    int k;
    int x,cont=0;
    int i;

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
            *(vett+k) = *(vettUg+i);
            i++;
        }
        cont = 0;
    }
}

int main() {
    float sommaDiv = 0;
    int n;
    n = chiediDim();
    float *vett=(float *)malloc(n*sizeof(float));
    float *vettUguali=(float *)malloc(n*sizeof(float));

    int k;

    for(k = 0; k < *(vett+n); k++) {
        printf("inserire nella cella [%d] =",k);
        scanf("%f",vett+k);
    }

    ripetitivi(vett,vettUguali,n, &sommaDiv);

    printf("La somma dei numeri che non si ripetono e': \n", sommaDiv);
    system("PAUSE");
    return 0;
}
