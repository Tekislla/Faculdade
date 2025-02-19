// PROBLEMA: Faça um programa que verifique se o número é inteiro ou quebrado

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float num;
    int aux;
	
	printf("Digite um numero: ");
	scanf("%f",&num);
	fflush(stdin);
	
    aux = num;
	if(aux == num){
		printf("O numero eh inteiro \n");
	}else{
		printf("O numero eh quebrado \n");
	}
	
	return 0;
}