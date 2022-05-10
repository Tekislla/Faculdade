#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct numeros{
    int n;
    struct numeros *prox;
    struct numeros *anterior;
}NUMEROS;

void inserir(NUMEROS **lista, int num);
void imprimir(NUMEROS *numeros);

int main (void) {
    int n, i;
    NUMEROS *lista = NULL;

	for (i = 0; i < TAM; i++) {
		printf("Digite o numero %i: ", i + 1);
    	scanf("%i", &n);
    	inserir(&lista, n);
	}
    
    imprimir(lista);

    return 0;
}

void inserir(NUMEROS **lista, int num){
    NUMEROS *aux, *novo = malloc(sizeof(NUMEROS));

    if(novo){
        novo->n = num;
        novo->prox = NULL;

        if(*lista == NULL){
            *lista = novo;
            novo->anterior = NULL;
        }
        else{
            aux = *lista;
            while(aux->prox)
                aux = aux->prox;
            aux->prox = novo;
            novo->anterior = aux;
        }
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void imprimir(NUMEROS *lista){
    while(lista != NULL){
        printf("lista->n: %i \n", lista->n);
        lista = lista->prox;
    }
}
