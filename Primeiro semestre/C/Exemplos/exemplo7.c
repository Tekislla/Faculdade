// PROBLEMA: Dado dois números qual é o maior?

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Variáveis?
	int n1, n2, maior = 0;
	
	// Entrada de dados?
	printf("Digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// Processamento?
	if(n1>n2){
		maior=n1;
	}else if(n2>n1){
		maior=n2;
	}else{
		printf("Os numeros sao iguais");
	}
	
	// Saída de dados
	if(maior!=0){
		printf("O maior numero e %i",maior);
	}
	
	return 0;
}