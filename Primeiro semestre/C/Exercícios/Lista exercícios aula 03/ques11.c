/*
Uma firma contrata um encanador a 25,00 por dia. Crie um programa que 
solicite o número de dias trabalhados pelo encanador e imprima a quantia 
líquida que deverá ser paga, sabendo-se que são descontados 8% para o 
Imposto de Renda.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int dias;
    float salario;
    
    printf("Digite quantos dias voce trabalhou no mes: ");
    scanf("%i", &dias);
    fflush(stdin);

    salario = (dias * 25) - ((dias * 25)* 0.08);

    printf("O seu salario eh de R$ %f \n",salario);

    return 0;
}