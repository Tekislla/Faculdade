#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct nomes{
	char *nome;
	struct nomes *prox;
}NOMES;

void imprimir(NOMES *lista);
void listaOrdenada(NOMES *lista);

int main (void){
	NOMES *lista1 = NULL;
	NOMES *lista2 = NULL;

	int i;
	
	for (i = 0; i < TAM; i++){
		NOMES *novo = (NOMES*) malloc(sizeof(NOMES));
		printf("Digite o nome %i da lista 1: ", i + 1);
		gets(novo->nome);
		novo->prox=lista1;
		lista1=novo;
	}
	
	for (i = 0; i < TAM; i++){
		NOMES *novo = (NOMES*) malloc(sizeof(NOMES));
		printf("Digite o nome %i da lista 2: ", i + 1);
		gets(novo->nome);
		novo->prox=lista2;
		lista2=novo;
	}
		
	comparar(lista1, lista2);
	
	return 0;
}

void comparar(NOMES *lista1, NOMES *lista2) {
    NOMES *atual1 = lista1;
    NOMES *atual2 = lista2;
    
    NOMES *lista3 = NULL;
    
    while (atual1 != NULL && atual2 != NULL) {
        if (atual1->nome == atual2->nome) {
        	NOMES *novo = (NOMES*) malloc(sizeof(NOMES));
            novo->nome = atual1->nome;
            novo->prox = lista3;
            lista3=novo;
        }

        atual1 = atual1->prox;
        atual2 = atual2->prox;
    }

    imprimir(lista3);
}


void imprimir(NOMES *lista){
	while(lista != NULL){
		printf("lista resultante: %s \n",lista->nome);
		lista = lista->prox;
	}
}

