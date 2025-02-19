/*
Construa um algoritmo que peça 2 números inteiros e um número real.
Calcule e mostre:
=> O produto do dobro do primeiro com metade do segundo .
=> A soma do triplo do primeiro com o terceiro.
=> O terceiro elevado ao cubo.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n1, n2;
    float n3, a, b, c;
    
    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);
    fflush(stdin);

    printf("Digite outro numero inteiro: ");
    scanf("%i", &n2);
    fflush(stdin);

    printf("Digite um numero decimal: ");
    scanf("%f", &n3);
    fflush(stdin);

    a = (n1 * 2) + (n2 / 2);
    b = (n1 * 3) + n3;
    c = (n3 * n3) * n3;

    printf("O produto do dobro do primeiro com metade do segundo: %.2f \n",a);
    printf("A soma do triplo do primeiro com o terceiro: %.2f \n",b);
    printf("O terceiro elevado ao cubo: %.2f \n",c);

    return 0;
}