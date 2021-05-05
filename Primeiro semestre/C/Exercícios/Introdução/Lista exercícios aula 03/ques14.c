/*
Construa um algoritmo que peça o salário bruto mensal de um funcionário, 
calcule e apresente os valores conforme modelo abaixo:
Salário Bruto : R$ 
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato ( 3%) : R$
Salário líquido : R$
Obs.: Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto – Descontos
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float ir = 0.15, inss = 0.11, sindicato = 0.03;
    float salario_bruto, salario_liquido, valor_ir, valor_inss, valor_sindicato, total_descontos;

    printf("Informe seu salario bruto: ");
    scanf("%f", &salario_bruto);
    fflush(stdin);

    valor_ir = (salario_bruto * ir);
    valor_inss = (salario_bruto * inss);
    valor_sindicato = (salario_bruto * sindicato);
    total_descontos = (valor_ir + valor_inss + valor_sindicato);
    salario_liquido = (salario_bruto - total_descontos);

    printf("Salario bruto   : %.2f\n",salario_bruto);
    printf("IR              : %.2f\n",valor_ir);
    printf("INSS            : %.2f\n",valor_inss);
    printf("Sindicato       : %.2f\n",valor_sindicato);
    printf("Salario liquido : %.2f\n",salario_liquido);

    return 0;
}