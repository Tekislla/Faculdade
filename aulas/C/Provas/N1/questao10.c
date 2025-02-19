#include <stdio.h>
#include <stdlib.h>

int main(void){

    float metros, polegadas;
    
    printf("Digite o numero em metros: ");
    scanf("%f", &metros);
    fflush(stdin);

    polegadas = metros * 39.37;

    printf("%.2f metro(s) equivale(m) a %.2f polegadas \n",metros, polegadas);

    return 0;
}