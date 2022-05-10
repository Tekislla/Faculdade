#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct numeros{
	int n;
	struct numeros *prox;
}NUMEROS;

int main (void){
	NUMEROS *lista = NULL;
    int i;
	
    for (i = 0; i < TAM; i++){
        NUMEROS *novo = (NUMEROS*) malloc(sizeof(NUMEROS));
        printf("Digite um numero: ");
        scanf("%d", &novo->n);
        novo->prox=lista;
        lista=novo;
    }
        
	while(lista!=NULL){
		printf("lista->n %i \n",lista->n);
		lista = lista->prox;
	}

    estaOrdenada(*lista);

	return 0;
}

void estaOrdenada(NUMEROS *lista) {
    if (lista != NULL){
        NUMEROS *auxiliar = (NUMEROS*) malloc(sizeof(NUMEROS));
        auxiliar=lista;
        while (auxiliar->prox != NULL){
            if (auxiliar->n > auxiliar->prox->n)
                printf("Desordenada");
            auxiliar = auxiliar->prox;
        }
    }
    printf("Ordenada");
}