/*
Elabore um programa para calcular a quantidade necessária de latas de tinta 
para pintar uma parede com X metros de largura por H metros de altura. 
Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a 
quantidade de tinta por lata é 3,6 litros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float tinta_lata = 3.6, tinta_m2 = 3;
    float largura, altura, area, consumo_latas;
    float latas_necessarias;

    printf("Informe a largura da parede: ");
    scanf("%f", &largura);
    fflush(stdin);

    printf("Informe a altura da parede: ");
    scanf("%f", &altura);
    fflush(stdin);

    area = (largura * altura);
    consumo_latas = (tinta_m2 * area);
    latas_necessarias = (consumo_latas / tinta_lata);

    printf("Serao necessarias %.0f latas de tinta para pintar a parede.\n",ceil(latas_necessarias));

    return 0;
}