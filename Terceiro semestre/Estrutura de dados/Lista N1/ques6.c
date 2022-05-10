#include <stdio.h>
#include <stdlib.h>

// Não consegui fazer imprimir uma mensagem, apenas um CHAR no local certo.

void escreveMatriz(int *linha, int *coluna, char *mensagem);

int main (void){
   
    int linha, coluna;
    char mensagem[50];

    printf("Digite a linha (1 a 5): ");
    scanf("%i", &linha);
    fflush(stdin);

    printf("Digite a coluna (1 a 5): ");
    scanf("%i", &coluna);
    fflush(stdin);

    printf("Digite a mensagem: ");
    gets(mensagem);
    fflush(stdin);
        
    escreveMatriz(&linha, &coluna, &mensagem);

    return 0;
}

void escreveMatriz(int *linha, int *coluna, char *mensagem){
    char matriz[5][5];
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = '*';
        }
    }

    matriz[*linha-1][*coluna-1] = *mensagem;

    printf("\nMatriz: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%c\t",matriz[i][j]);
        }
        printf("\n");
    }
    
}