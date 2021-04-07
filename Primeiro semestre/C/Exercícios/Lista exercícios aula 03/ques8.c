/*
Construir um algoritmo que peça dois números e mostre a soma dos mesmos
Pedir n1 e n2
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float n1, n2, soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    fflush(stdin);

    soma = n1 + n2;

    printf("A soma dos dois numeros eh %.2f \n",soma);

    return 0;
}