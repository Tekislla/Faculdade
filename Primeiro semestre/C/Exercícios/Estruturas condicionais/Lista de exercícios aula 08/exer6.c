// PROBLEMA: Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char sexo;
	
	printf("Informe o seu sexo (M para Masculuno, F para Feminino): ");
	scanf("%s",&sexo);
	fflush(stdin);

    if (sexo >= 'a' && sexo <= 'z'){

        sexo = sexo - ('a' - 'A');
    }
    
	
    switch (sexo){

        case 'M':
            printf("Masculino \n");
            break;

        case 'F':
            printf("Feminino \n");
            break;

        default:
            printf("ERRO: sexo invalido \n");
            break;
    }

	return 0;
}