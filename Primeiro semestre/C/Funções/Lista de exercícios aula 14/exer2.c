/*
2. Faça uma função que desenhe linhas de caracteres na tela, a função 
receberá como argumento o tipo de caractere e o número de linhas que deverá 
imprimir.
*/

#include <stdio.h>
#include <stdlib.h>

//protótipo da função
void imprima(char c, int n);

//código
int main (void){
    char caract;
    int linhas;

    printf("Digite um caractere: ");
    scanf("%c", &caract);
    fflush(stdin);

    printf("Digite o numero de linhas: ");
    scanf("%i", &linhas);
    fflush(stdin);

    imprima(caract, linhas);

    return 0;
}

//função valida
void imprima(char c, int n){
    int linha, coluna;
    for (linha = 1; linha <= n; linha++){
        for (coluna = 1; coluna <= 80; coluna++){
            printf("%c", c);
        }
        printf("\n",c);
    }
    
}