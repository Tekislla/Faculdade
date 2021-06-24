/*
10. Construa um algoritmo que leia um vetor de 20 elementos e coloque-os em 
ordem crescente.
R.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int vetor[10], i, aux;

    for(i=0;i<10;i++){
        printf("Digite o %i numero: ",i+1);
        scanf("%i",&vetor[i]);
        fflush(stdin);
    }

    for(i=0;i<=9;i++){
        if (vetor[i] > vetor[i+1]){
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
        }
    }

    for (i = 0; i <= 9; i++) {
        printf("%i, ",vetor[i]);
    }
    
    return 0;
}