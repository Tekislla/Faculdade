#include <stdio.h>
#include <stdlib.h>

int main (void){
    char nome[50];
    int cont=1;

    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);

    do {
        printf("%i - %s\n",cont,nome);
        cont=cont+1;
    } while(cont<=15);

    return 0;
}