/*
6. Construa  um  algoritmo  que  leia  duas  matrizes  3x3  e  gere  uma  terceira  matriz com a soma 
dos elementos correspondentes de a e b.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    // variáveis
    int a[3][3], b[3][3], r[3][3], i, j;
    // entrada
    printf("Valores da matriz A: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&a[i][j]);
            fflush(stdin);
        }
    }
    printf("\nValores da matriz B: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&b[i][j]);
            fflush(stdin);
        }
    }
    // processamento
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            r[i][j]=a[i][j]+b[i][j];
        }
    }
    // saída
    printf("\nValores da matriz resultante: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}