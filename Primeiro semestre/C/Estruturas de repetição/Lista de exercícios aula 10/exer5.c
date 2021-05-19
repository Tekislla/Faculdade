#include <stdio.h>
#include <stdlib.h>

int main (void){
    int qtd_turmas, alunos, soma = 0, cont = 1;
    float media;

    printf("Digite a quantidade de turmas: ");
    scanf("%i",&qtd_turmas);
    fflush(stdin);

    while (cont <= qtd_turmas){
        printf("Digite a quantidade de alunos da turma %i: ", cont);
        scanf("%i",&alunos);
        fflush(stdin);
        if (alunos > 0 && alunos <= 40){
            soma += alunos;
            cont++; 
        } else {
            printf("ERRO: a turma deve ter no maximo 40 alunos\n\n");
        }    
    }

    media = (float) soma / qtd_turmas;

    printf("A media de alunos eh %.1f\n", media);

    return 0;
}