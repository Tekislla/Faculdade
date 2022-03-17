#include <stdio.h>
#include <stdlib.h>
int main (void){
    int alunos, alunosAcimaMedia = 0, i;
    float media, soma = 0;
  
    printf("Digite a quantidade de alunos: ");
    scanf("%i",&alunos);
    fflush(stdin);
    
    int notas[alunos];
    
    for(i=0; i < alunos; i++){
        printf("Digite a nota do aluno %i: ",i+1);
        scanf("%i",&notas[i]);
        fflush(stdin);
    }
    
    for(i = 0; i < alunos; i++){
        soma += notas[i];
    }
    
    media = soma / alunos;
    
    for(i = 0; i < alunos; i++){
    	if (notas[i] > media) {
    		alunosAcimaMedia++;
		}
	}
    
    printf("A soma das notas eh %.2f\n",soma);
    printf("A media das notas eh %.2f\n",media);
    printf("A quantidade de alunos acima da media eh %i\n",alunosAcimaMedia);
    return 0;
}
