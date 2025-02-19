/*
8. Construa um algoritmo que leia uma matriz quadrada de ordem 3. Leia uma 
constante K, diminui a diagonal principal por esta constante e imprima a matriz 
resultante.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int matriz[3][3], constante, resultado, i, j;

    printf("Digite a constante: ");
    scanf("%i",&constante);
    fflush(stdin);

    printf("Insira os valores da matriz: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&matriz[i][j]);
            fflush(stdin);
        }
    }
    
    matriz[0][0] -= constante;
    matriz[1][1] -= constante;
    matriz[2][2] -= constante;

    printf("\nValores da matriz resultante: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
