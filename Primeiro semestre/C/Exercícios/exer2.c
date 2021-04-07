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
    char nome[50], sexo;
    int idade;
    float altura;

    printf("Digite o seu nome: ");
    gets(nome); //scanf("%s", &nome);
    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    fflush(stdin);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    
    printf("Qual seu sexo? (M ou F): ");
    scanf("%c", &sexo);
    fflush(stdin);
    
    printf("Seu nome eh %s\n", nome);
    printf("Sua idade eh %i\n", idade);
    printf("Sua altura eh %.2f\n", altura);
    printf("Seu sexo eh %c\n", sexo);

    return 0;
}