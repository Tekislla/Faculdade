// PROBLEMA: Faça um programa que leia um número e exiba o dia correspondente da semana. 
//(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.


#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dia;
	
	printf("Digite o número referente ao dia da semana: ");
	scanf("%i",&dia);
	fflush(stdin);
	
    switch (dia){

        case 1:
            printf("Domingo \n");
            break;

        case 2:
            printf("Segunda \n");
            break;

        case 3:
            printf("Terca \n");
            break;
        
        case 4:
            printf("Quarta \n");
            break;

        case 5:
            printf("Quinta \n");
            break;

        case 6:
            printf("Sexta \n");
            break;

        case 7:
            printf("Sabado \n");
            break;

        default:
            printf("ERRO: valor invalido \n");
            break;
    }

	return 0;
}