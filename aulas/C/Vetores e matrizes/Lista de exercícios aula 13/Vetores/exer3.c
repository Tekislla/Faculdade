/*
2. Construa um algoritmo que leia um vetor de 10 números reais e mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int numeros[10], i;
    // entrada de dados
    for(i=0;i<10;i++){
        printf("Digite o %i numero: ",i+1);
        scanf("%i",&numeros[i]);
        fflush(stdin);
    }
    // saída de dados
    for(i=9;i>=0;i--){
        printf("%i, ",numeros[i]);
    }
    return 0;
}