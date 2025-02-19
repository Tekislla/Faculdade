#include <stdio.h>
#include <stdlib.h>

int main (void){
    int qtd_cd, cont = 1;
    float custo_cd, media, soma = 0;

    printf("Digite a quantidade de CD's comprados: ");
    scanf("%i",&qtd_cd);
    fflush(stdin);

    while (cont <= qtd_cd){
        printf("Digite o valor do CD %i: ", cont);
        scanf("%f",&custo_cd);
        fflush(stdin);
            soma += custo_cd;
            cont++;  
    }


    media = soma / qtd_cd;

    printf("O valor total investido foi de R$ %.2f\n", soma);
    printf("O custo medio de cada CD eh de R$ %.2f\n", media);

    return 0;
}