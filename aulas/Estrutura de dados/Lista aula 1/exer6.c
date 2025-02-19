#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int numPessoas, i;
    float media, notaAluno, notaTotal = 0;
    
    printf("Informe o numero de pessoas da turma: ");
	scanf("%i",&numPessoas);
	fflush(stdin);
	
	for(i = 0; i < numPessoas; i++){
		printf("Informe a idade do primeiro aluno: ");
		scanf("%f",&notaAluno);
		fflush(stdin);
		
		notaTotal += notaAluno;
	}

    media = notaTotal / numPessoas;
    	
    if (media <= 25){
        printf("Turma Jovem \n");
    } else if (media > 25 && media <= 60){
        printf("Turma adulta \n");
    } else {
        printf("Turma idosa \n");
    }
    
	return 0;
}
