// PROBLEMA: Faça um programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float n1, n2, n3, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f",&n1);
	fflush(stdin);

    printf("Informe a segunda nota: ");
	scanf("%f",&n2);
	fflush(stdin);

    printf("Informe a terceira nota: ");
	scanf("%f",&n3);
	fflush(stdin);

    media = (n1 + n2 + n3) / 3;
    	
    if (media == 10){
        printf("Aprovado com distincao \n");
    } else if (media >= 7){
        printf("Aprovado \n");
    } else {
        printf("Reprovado \n");
    }
    
    
	return 0;
}