#include <stdio.h>
#include <stdlib.h>
int main (void){
    int vetor1[10], vetor2[10], vetor3[10], vetorResultante[30], i;
  

    for(i=0; i < 10; i++){
        printf("Digite o numero %i do primeiro vetor: ",i+1);
        scanf("%i",&vetor1[i]);
        fflush(stdin);
    }
    
    for(i=0; i < 10; i++){
        printf("Digite o numero %i do segundo vetor: ",i+1);
        scanf("%i",&vetor2[i]);
        fflush(stdin);
    }
    
    for(i=0; i < 10; i++){
        printf("Digite o numero %i do terceiro vetor: ",i+1);
        scanf("%i",&vetor3[i]);
        fflush(stdin);
    }
    
    
    for (i = 0; i < 10; i++) {
        vetorResultante[i*3] = vetor1[i];
    }
    for (i = 0; i < 10; i++) {
        vetorResultante[i*3+1] = vetor2[i];
    }
    for (i = 0; i < 10; i++) {
        vetorResultante[i*3+2] = vetor3[i];
    }
    
    for (i = 0; i < 30; i++){
    	printf("%i, ", vetorResultante[i]);
	
	}    
    
    return 0;
}
