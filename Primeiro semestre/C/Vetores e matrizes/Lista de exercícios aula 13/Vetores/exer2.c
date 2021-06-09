/*
2. Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma, a multiplicação e os números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    float numeros[5], soma = 0, multiplicacao = 1;
    int i;
    // entrada de dados
    for(i=0;i<5;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%f",&numeros[i]);
        fflush(stdin);
    }
    // processamento
    for(i=0;i<5;i++){
        soma+=numeros[i];
        multiplicacao*=numeros[i];
    }
    // saída
    printf("A soma e %f\n",soma);
    printf("A multiplicacao e %f\n",multiplicacao);
    printf("O numeros sao: ");
    for(i=0;i<5;i++){
        printf("%f, ",numeros[i]);
    }
    return 0;
}