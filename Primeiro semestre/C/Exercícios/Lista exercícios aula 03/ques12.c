/*
Uma determinada empresa vende uma máquina que possui seis motores.
Um  de 20 CV, dois de 1 CV, e três de 5 CV, que custam
1500, 300 e 600 reais respectivamente cada motor.
Existe a necessidade de saber quantos motores  deverão ser comprados de cada modelo e quanto custará esta compra.
Para isto elabore um programa que: 

a. Pergunte quantas máquinas serão vendidas;
b. Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo; 
c. Calcule e apresente na tela o custo total por máquina, o custo por tipo 
de motor e o custo total da compra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int m20cv = 1, m1cv = 2, m5cv = 3, precom20 = 1500, precom1 = 300, precom5 = 600;
    int preco_maquina, qtd_maquinas, qtd_m20cv, qtd_m1cv, qtd_m5cv, custo_m20cv, custo_m1cv, custo_m5cv;
    float custo_maquina, custo_total;
    
    printf("Digite quantas maquinas serao vendidas: ");
    scanf("%i", &qtd_maquinas);
    fflush(stdin);
    
    qtd_m20cv = m20cv * qtd_maquinas;
    qtd_m1cv = m1cv * qtd_maquinas;
    qtd_m5cv = m5cv * qtd_maquinas;

    preco_maquina = precom20 + (2 * precom1) + (3 * precom5);
    custo_maquina = preco_maquina * qtd_maquinas;
    custo_m20cv = qtd_m20cv * precom20;
    custo_m1cv = qtd_m1cv * precom1;
    custo_m5cv = qtd_m5cv * precom5;


    printf("Deverao ser comprados %i motores de 20 CV, %i motores de 1 CV e %i motores de 5 CV. \n", qtd_m20cv, qtd_m1cv, qtd_m5cv);
    printf("Cada maquina custara R$ %i. \n", preco_maquina);
    printf("O custo do(s) motor(es) de 20 CV sera de R$ %i. \n", custo_m20cv);
    printf("O custo do(s) motor(es) de 1 CV sera de R$ %i. \n", custo_m1cv);
    printf("O custo do(s) motor(es) de 5 CV sera de R$ %i. \n", custo_m5cv);
    printf("O custo total da compra sera de R$ %.2f. \n", custo_maquina);

    return 0;
}