#include <stdio.h>
#include <stdlib.h>

int main (void){
    int menor, maior, numero, cont = 1;
    while (cont <= 10){
        printf("Digite o %i numero: ", cont);
        scanf("%i",&numero);
        fflush(stdin);

        if(cont == 1){
            menor = numero;
            maior = numero;
        } else { 
            if (menor>numero){
                menor = numero;
            }
            if (maior<numero){
                maior = numero;
            }
        }
    cont++;
    }

    printf("A diferenca eh %i", maior - menor);

    return 0;
}