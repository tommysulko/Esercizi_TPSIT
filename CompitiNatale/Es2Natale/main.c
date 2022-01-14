#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/*
Scrivere un programma che legga una sequenza di caratteri e li stampi in ordine inverso. Usa una
pila.
*/

int testa;

int menu_scelta()
{
  int selezione = 0;
  do
    {
    printf("\n" );
    printf("\n1 -> Aggiungi un carattere" );
    printf("\n2 -> Stampa pila");
    printf("\n3 -> Esci");
    printf("\n" );
    printf("\nEffettua una scelta: " );
    scanf("%d", &selezione );
    }
    while (selezione < 1 || selezione > 3);
  return selezione;
}

void Push(char Pila[]) {
	char c;

	if(testa == MAX){
       printf("\n -> Pila piena" );
	}else {
	    fflush(stdin);
        printf("\nInserisci un carattere: " );
        scanf("%c", &c);
        Pila[testa++] = c;
	}
}

void Print(char Pila[]) {
	int i;

	if(testa == 0){
       printf("\n -> Pila vuota" );
	}else{
        for(i = testa - 1; i >= 0; i--){
           printf("indice i: %d elemento %c\n", i, Pila[i]);
        }

	}
}

int main(){
	int scelta;
	char Pila[MAX];

	while((scelta = menu_scelta()) != 3){
             switch(scelta){
                   case 1:
                        Push(Pila);
                        break;
                   case 2:
                        Print(Pila);
                        break;
                    case 3:
                        break;
                }
    }
    system("pause");
    return 0;
}
