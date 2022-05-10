#include <stdio.h>
#include <stdlib.h>

//dado estruturado(abstrato)
typedef struct peca{
    int codigo;
    char nome[50], cor[50];
    float peso, preco;
}Peca;

Peca entrada(void);
void saida(Peca a);

//main
int main(void){
    int i, qtd;

    printf("Digite a quantidade de pecas para cadastrar: ");
    scanf("%i", &qtd);
    fflush(stdin);

    Peca bd[qtd];

    for(i = 0; i < qtd; i++){
        bd[i]=entrada();
    }

    for(i = 0; i < qtd; i++){
        saida(bd[i]);
    }


    return 0;
}

Peca entrada(void){
    Peca a;

    printf("Digite o codigo: ");
    scanf("%i", &a.codigo);
    fflush(stdin);

    printf("Digite o nome: ");
    gets(a.nome);
    fflush(stdin);

    printf("Digite a cor: ");
    gets(a.cor);
    fflush(stdin);

    printf("Digite o peso: ");
    scanf("%f", &a.peso);
    fflush(stdin);

    printf("Digite o preco: ");
    scanf("%f", &a.preco);
    fflush(stdin);

    return a;
}

void saida(Peca a){
    printf("%i\t%s\t%s\t%f\t%f\n",a.codigo, a.nome, a.cor, a.peso, a.preco);
}