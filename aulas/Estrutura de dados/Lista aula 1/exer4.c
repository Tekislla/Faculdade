#include <stdio.h>
#include <stdlib.h>

int main (void){
	int ano;
	
	printf("Digite um ano: ");
	scanf("%i",&ano);
	fflush(stdin);
	
	if(ano%4 == 0){
		printf("O ano eh bissexto \n");
	}else{
		printf("O ano nao eh bissexto \n");
	}
	
	return 0;
}
