#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct numeros{
	int n;
	struct numeros *prox;
}NUMEROS;

void imprimir(NUMEROS *lista);
void listaOrdenada(NUMEROS *lista);

int main (void){
	NUMEROS *lista = NULL;
	int i;
	
	for (i = 0; i < TAM; i++){
		NUMEROS *novo = (NUMEROS*) malloc(sizeof(NUMEROS));
		printf("Digite o numero %i: ", i + 1);
		scanf("%i", &novo->n);
		novo->prox=lista;
		lista=novo;
	}
	
	imprimir(lista);
	
	return 0;
}

void imprimir(NUMEROS *lista){
	while(lista != NULL){
		printf("lista->n: %i \n",lista->n);
		lista = lista->prox;
	}
}
