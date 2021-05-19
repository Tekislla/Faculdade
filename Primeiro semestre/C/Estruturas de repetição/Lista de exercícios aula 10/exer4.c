#include <stdio.h>
#include <stdlib.h>

int main (void){
    int qtd_notas, cont = 1;
    float nota, media, soma = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%i",&qtd_notas);
    fflush(stdin);

    while (cont <= qtd_notas){
        printf("Digite a nota %i: ", cont);
        scanf("%f",&nota);
        fflush(stdin);
        soma += nota;
        cont++;
    }

    media = soma / qtd_notas;

    printf("A media eh %.1f\n", media);

    return 0;
}