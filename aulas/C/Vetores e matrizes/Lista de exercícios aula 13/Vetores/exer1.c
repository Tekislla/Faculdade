/*
1. Construa um  algoritmo  que  leia  um  vetor  de 10 números  inteiros  e  mostre  a soma dos números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int numeros[10], soma = 0, i;
    // entrada de dados
    for(i=0;i<10;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%i",&numeros[i]);
        fflush(stdin);
    }
    // processamento
    for(i=0;i<10;i++){
        soma+=numeros[i];
    }
    // saída de dados
    printf("A soma dos numeros e %i\n",soma);
    return 0;
}