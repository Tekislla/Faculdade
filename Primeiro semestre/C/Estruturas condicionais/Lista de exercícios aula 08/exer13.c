// PROBLEMA: Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:
// a) Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem"; 
// b) Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta"; 
// c) Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa". 

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int aluno1, aluno2, aluno3, aluno4;
    float media;
	
	printf("Informe a idade do primeiro aluno: ");
	scanf("%i",&aluno1);
	fflush(stdin);

    printf("Informe a idade do segundo aluno: ");
	scanf("%i",&aluno2);
	fflush(stdin);

    printf("Informe a idade do terceiro aluno: ");
	scanf("%i",&aluno3);
	fflush(stdin);

    printf("Informe a idade do quarto aluno: ");
	scanf("%i",&aluno4);
	fflush(stdin);

    media = (aluno1 + aluno2 + aluno3 + aluno4) / 4;
    	
    if (media < 25){
        printf("Turma Jovem \n");
    } else if (media > 25 && media < 40){
        printf("Turma adulta \n");
    } else {
        printf("Turma idosa \n");
    }
    
	return 0;
}