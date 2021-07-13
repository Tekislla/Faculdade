#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int a[3][3], b[3][3], r[3][3], i, j;
    
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
    
    r[0][0] = (a[0][0] * b[0][0]) + (a[0][1] * b[1][0]) + (a[0][2] * b[2][0]);
    r[0][1] = (a[0][0] * b[0][1]) + (a[0][1] * b[1][1]) + (a[0][2] * b[2][1]);
    r[0][2] = (a[0][0] * b[0][2]) + (a[0][1] * b[1][2]) + (a[0][2] * b[2][2]);

    r[1][0] = (a[1][0] * b[0][0]) + (a[1][1] * b[1][0]) + (a[1][2] * b[2][0]);
    r[1][1] = (a[1][0] * b[0][1]) + (a[1][1] * b[1][1]) + (a[1][2] * b[2][1]);
    r[1][2] = (a[1][0] * b[0][2]) + (a[1][1] * b[1][2]) + (a[1][2] * b[2][2]);

    r[2][0] = (a[2][0] * b[0][0]) + (a[2][1] * b[1][0]) + (a[2][2] * b[2][0]);
    r[2][1] = (a[2][0] * b[0][1]) + (a[2][1] * b[1][1]) + (a[2][2] * b[2][1]);
    r[2][2] = (a[2][0] * b[0][2]) + (a[2][1] * b[1][2]) + (a[2][2] * b[2][2]);

    printf("\nValores da matriz resultante: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}