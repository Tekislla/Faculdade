// PROBLEMA:  Faça um programa que pergunte em que turno você estuda. Peça para digitar
// M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char turno;
	
	printf("Digite o turno em que estuda (M para Matutino, V para Vespertino ou N para Noturno): ");
	scanf("%s",&turno);
	fflush(stdin);

    if (turno >= 'a' && turno <= 'z'){

        turno = turno - ('a' - 'A');
    }
    
	
    switch (turno){

        case 'M':
            printf("Bom dia! \n");
            break;

        case 'V':
            printf("Boa Tarde! \n");
            break;

        case 'N':
            printf("Boa noite! \n");
            break;

        default:
            printf("ERRO: valor invalido \n");
            break;
    }

	return 0;
}