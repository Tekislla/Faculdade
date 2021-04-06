/*
Construa um algoritmo que peça a temperatura em Fahrenheit e transforme em Celsius
FAR = (CEL * 9/5) + 32
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Quais são as variáveis?
    float cel, far;
    
    //Quais são as entradas de dados?
    printf("Digite o valor da temperadora em graus Celsius: ");
    scanf("%f", &cel);

    //Qual o processamento dos dados?
    far = (cel * 9 / 5) + 32;

    //Quais são as saídas de dados?
    printf("O valor da temperatura em graus Fahrenheit eh de %f \n",far);

    return 0;
}