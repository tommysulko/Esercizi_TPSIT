#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define PLUNG 10
#define LUNG 50

bool esisteA(char * stringa) {
    bool ok=false;

    int lungh=strlen(stringa);
    int k=0;

    while(k< lungh && ok == false) {
        if(*(stringa+k)== 'a' || *(stringa+k)=='A'){
            ok=true;
        }
        k++;
    }
    return ok;
}

int main() {

    char * stringa=(char *)malloc(LUNG *sizeof(char));

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    if(esisteA(stringa) == true){
        printf("Nella stringa esiste la lettera A");
    }else {
        printf("Nella stringa non esiste la lettera A");
    }
    return 0;
}
