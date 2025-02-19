/*
Construir um algoritmo que mostre:
Nome (char *vetor*) [%s]
Idade(int) [%i]
Altura(float) [%f]
Sexo(char) [%c]
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //Variáveis
    char nome[50] = {"Joao"};
    int idade = 20;
    float altura = 1.75;
    char sexo = 'M';

    //Saída de dados
    printf("Seu nome eh %s\n", nome);
    printf("Sua idade eh %i\n", idade);
    printf("Sua altura eh %.2f\n", altura);
    printf("Seu sexo eh %c\n", sexo);

    return 0;
}