// PROBLEMA: Faça um programa que peça um número e imprima se o número é par ou ímpar

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i",&num);
	fflush(stdin);
	
	if(num%2 == 0){
		printf("O numero eh par \n");
	}else{
		printf("O numero eh impar \n");
	}
	
	return 0;
}