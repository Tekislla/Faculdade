/*
Construir um algoritmo que calcule a área de um círculo
Fórmula: A = 2 * pi * r
Pedir o raio
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float raio, area, pi = M_PI;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    fflush(stdin);

    area = pi * pow(raio,2);
    
    printf("A area do circulo eh %.2f m\xFD\n", area);

    return 0;
}