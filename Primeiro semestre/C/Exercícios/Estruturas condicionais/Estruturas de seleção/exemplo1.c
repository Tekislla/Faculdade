// PROBLEMA: Faça um algoritmo que escreva por extenso de 0 até 9

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num;
	
	printf("Digite um numero de 0 a 9: ");
	scanf("%i",&num);
	fflush(stdin);
	
    switch (num){

        case 0:
            printf("Zero \n");
            break;

        case 1:
            printf("Um \n");
            break;

        case 2:
            printf("Dois \n");
            break;

        case 3:
            printf("Tres \n");
            break;
        
        case 4:
            printf("Quatro \n");
            break;

        case 5:
            printf("Cinco \n");
            break;

        case 6:
            printf("Seis \n");
            break;

        case 7:
            printf("Sete \n");
            break;

        case 8:
            printf("Oito \n");
            break;

        case 9:
            printf("Nove \n");
            break;

        default:
            printf("ERRO: opcao invalida \n");
            break;
    }

	return 0;
}