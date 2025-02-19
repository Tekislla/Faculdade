#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i = 1;
    float nota, media, soma = 0;

    while (i <= 4){
        printf("Digite a nota %i: ", i);
        scanf("%f",&nota);
        fflush(stdin);
        soma += nota;
        i++;
    }

    media = soma / 4;
    printf("A media eh %.1f\n", media);

    if (media >= 7){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

    return 0;
}