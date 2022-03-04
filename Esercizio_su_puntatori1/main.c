#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define LUNG 50

/*Verificare se una stringa è palindroma*/

bool isPalindroma(char * s) {
    bool ok=false;

    int lungh;
    lungh=strlen(s);
    int k=0;

    while(k< lungh/2 && ok == false) {
        if(*(s+k) == *(s+(lungh-1-k))){
            ok=true;
        } else {
            ok=false;
        }

        k++;
    }
    return ok;
}

int main() {
    char * stringa=(char *)malloc(LUNG *sizeof(char));

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    if(isPalindroma(stringa) == true)
        printf("La stringa che hai inserito e' palindroma\n");
    else
        printf("La stringa che hai inserito NON è palindroma\n");

    return 0;
}
