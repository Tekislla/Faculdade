// PROBLEMA: Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i",&num);
	fflush(stdin);
	
	if(num%2 == 0){
        num++;
		printf("O numero agora eh impar %i \n", num);
	}else{
        num++;
		printf("O numero agora eh par %i \n", num);
	}
	
	return 0;
}