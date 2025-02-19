// MATRIZES
/*
PROBLEMA: Construa um programa que solicite ao usuário 9 números e guarde em um matriz 3x3 de inteiro.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int numeros[3][3], linha, coluna;
    // entrada de dados
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite um numero (%i,%i): ",linha,coluna);
            scanf("%i",&numeros[linha][coluna]);
            fflush(stdin);
        }
    }
    // saída de dados
    printf("\nA matriz numeros e: \n\n");
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("%i\t",numeros[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}