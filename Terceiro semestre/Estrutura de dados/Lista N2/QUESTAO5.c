#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct numeros{
    int valor;
    struct numeros *prox;
}NUMEROS;

typedef struct{
    NUMEROS *inicio;
    NUMEROS *fim;
    int tam;
}LISTA;

void inserir(LISTA *lista, int num);
void imprimir(LISTA lista);

int main(void) {
    int i, valor;
    LISTA lista;
    
    criarLista(&lista);

	for (i = 0; i < TAM; i++){
		printf("Digite o numero %i: ", i + 1);
    	scanf("%i", &valor);
    	inserir(&lista, valor);
	}
        
    imprimir(lista);

    return 0;
}

void criarLista(LISTA *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

void inserir(LISTA *lista, int num){
    NUMEROS *novo = malloc(sizeof(NUMEROS));

    if(novo) {
        novo->valor = num;
        if(lista->inicio == NULL){
            lista->inicio = novo;
            lista->fim = novo;
            lista->fim->prox = lista->inicio;
        }
        else{
            lista->fim->prox = novo;
            lista->fim = novo;
            novo->prox = lista->inicio;
        }
        lista->tam++;
    }
}

void imprimir(LISTA lista){
    NUMEROS *numeros = lista.inicio;
    if(numeros) {
        do{
            printf("lista->n: %i \n", numeros->valor);
            numeros = numeros->prox;
        } while (numeros != lista.inicio);
        printf("inicio: %i \n", numeros->valor);
    }
}
