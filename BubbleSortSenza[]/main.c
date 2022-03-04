#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void caricaVettore(int v[],int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("inserire nella cella [%d] =",k);
        scanf("%d",v+k);
    }

}

void bubbleSort(int vett[], int n){
    int sup, i, a;

    for(sup = n - 1; sup > 0; sup--){
        for(i = 0; i < sup; i++){
            if(*(vett+i) > *(vett+i+1)){
                a = *(vett+i+ 1);
                *(vett+i+1) = *(vett+i);
                *(vett+i) = a;
            }
        }
    }
}

void stampaVettore(int v[],int i) {
    int k;
    printf("VETTORE:\n");
    for(k = 0; k < i; k++) {
        printf("%d | ",v+k);
    }
}

int main() {
    int vett[DIM];

    caricaVettore(vett,DIM);
    bubbleSort(vett,DIM);
    stampaVettore(vett,DIM);

    printf("\n");
    system("PAUSE");
    return 0;
}
