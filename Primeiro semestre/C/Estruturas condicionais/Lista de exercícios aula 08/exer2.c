// PROBLEMA: Peça um valor e mostre se é positivo ou negativo

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i",&num);
	fflush(stdin);
	
	if(num>=0){
		printf("O numero eh positivo \n");
	}else{
		printf("O numero eh negativo \n");
	}
	
	return 0;
}