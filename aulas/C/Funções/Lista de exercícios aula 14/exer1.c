/*
1. Faça um programa que leia um número, passe este número como parâmetro para 
uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
*/

#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int valida(int numero);

int main (void){
    // variável local
    int numero;
    // entrada de dados
    printf("Digite um numero: ");
    scanf("%i",&numero);
    fflush(stdin);
    // saída de dados
    switch(valida(numero)){
        case 0:
            printf("O numero e par\n");
            break;
        case 1:
            printf("O numero e impar\n");
    }
    return 0;
}

// função valida
int valida(int numero){
    // processamento
    if(numero%2 == 0){
        return 0;
    }else{
        return 1;
    }
}