#include <stdio.h>
#include <stdlib.h>

int main(void){

    char nome[50];
    float n1, n2, n3, media;
    

    printf("Digite seu nome completo: ");
    gets(nome);
    fflush(stdin);

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    fflush(stdin);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    fflush(stdin);


    media = (n1 + n2 + n3) / 3;
    printf("Caro %s, sua media eh %.2f \n",nome, media);

    return 0;
}