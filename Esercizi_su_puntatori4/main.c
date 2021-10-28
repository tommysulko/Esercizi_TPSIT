#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LUNG1 50
#define LUNG2 100

/*Concatenare due stringhe senza strcat*/

void stringcat(char *stringa1, char *stringa2) {

    int dim1=strlen(stringa1);
    int dim2=strlen(stringa2);

    for(int k=0; k < dim2; k++) {
        *(stringa1+dim1+k)= *(stringa2+k);
    }
    *(stringa1+dim1+dim2)='\0';
}

int main() {

    char * stringa1= (char *) malloc(LUNG2 * sizeof(char));
    char * stringa2= (char *) malloc(LUNG1 * sizeof(char));

    printf("Inserisci la prima stringa: ");
    scanf("%s", stringa1);

    printf("Dammi la seconda stringa da concatenare: ");
    scanf("%s", stringa2);

    stringcat(stringa1, stringa2);
    printf("La stringa concatenata e': %s", stringa1);

    return 0;
}
