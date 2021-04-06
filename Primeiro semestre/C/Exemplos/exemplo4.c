/*
Construa um algoritmo que peça a temperatura em Fahrenheit e transforme em Celsius
CEL = 5 * (FAR - 32)/9
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Quais são as variáveis?
    float far, cel;
    
    //Quais são as entradas de dados?
    printf("Digite o valor da temperadora em graus Fahrenheit: ");
    scanf("%f", &far);

    //Qual o processamento dos dados?
    cel = 5 * (far - 32)/9;

    //Quais são as saídas de dados?
    printf("O valor da temperatura em graus Celsius eh de %f \n",cel);

    return 0;
}