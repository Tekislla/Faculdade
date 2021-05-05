/*
Exercício - pergunte ao usuário:
Quanto ganha por hora
Horas trabalhadas no mês
Calcule e mostre o total do seu salário no mês.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Quais são as variáveis?
    float valor, horas, salario;
    
    //Quais são as entradas de dados?
    printf("Digite o quanto vc ganha por hora: ");
    scanf("%f", &valor);
    fflush(stdin);

    printf("Digite quantas horas vc trabalhou no mes: ");
    scanf("%f", &horas);
    fflush(stdin);

    //Qual o processamento dos dados?
    salario = valor * horas;

    //Quais são as saídas de dados?
    printf("O seu salario eh de R$ %f \n",salario);

    return 0;
}