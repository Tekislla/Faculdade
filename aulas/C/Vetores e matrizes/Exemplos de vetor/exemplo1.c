// VETOR
/*
PROBLEMA: Construa um programa que solicite ao usuário 5 números e guarde em um vetor 5 numeros inteiro.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int numeros[5], i;
    // entrada de dados
    for(i=0;i<5;i++){
        printf("Digite o %i numero: ",i+1);
        scanf("%i",&numeros[i]);
        fflush(stdin);
    }
    // saída de dados
    for(i=0;i<5;i++){
        printf("%i, ",numeros[i]);
    }
    return 0;
}