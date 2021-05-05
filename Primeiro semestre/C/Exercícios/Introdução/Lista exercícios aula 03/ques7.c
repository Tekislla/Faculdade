/*
Construir um algoritmo que peça dois números e mostre a soma dos mesmos
Pedir n1 e n2
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float m, cm;
    
    printf("Digite o numero em metros: ");
    scanf("%f", &m);
    fflush(stdin);

    cm = m * 100;

    printf("%.1f metros equivale a %.1f centimetros \n",m, cm);

    return 0;
}