/*
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 15
int main (void){
    // variáveis
    int i;
    char palavra[TAM][30];
    // entrada
    for(i=0;i<TAM;i++){
        printf("Digite %i palavra: ",i+1);
        gets(palavra[i]);
        fflush(stdin);
    }
    // saída
    for(i=TAM-1;i>=0;i--){
        printf("%s\n",palavra[i]);
    }
    return 0;
}