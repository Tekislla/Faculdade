#include <stdio.h>
#include <stdlib.h>

int main (void){
	char letra;
	
	printf("Informe uma letra: ");
	scanf("%s",&letra);
	fflush(stdin);

    if (letra >= 'a' && letra <= 'z'){
        letra = letra - ('a' - 'A');
    }
    	
    switch (letra){

        case 'A':
            printf("A letra eh uma vogal \n");
            break;

        case 'E':
            printf("A letra eh uma vogal \n");
            break;

        case 'I':
            printf("A letra eh uma vogal \n");
            break;

        case 'O':
            printf("A letra eh uma vogal \n");
            break;

        case 'U':
            printf("A letra eh uma vogal \n");
            break;

        default:
            printf("A letra eh uma consoante \n");
            break;
    }
    
	return 0;
}
