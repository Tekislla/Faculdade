/*
Exercício - peça ao usuário e imprima seus dados na tela:
Nome
Endereço
Telefone
Email
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*
    char[] -> diz que a variável armazena caracteres e dentro do [] é informado o número de caracteres
    */

	// variáveis
	char nome[50], endereco[50], telefone[15], email[50];
	
    /*
    gets -> pede que o usuário digite a informação
    fflush -> limpa buffer do teclado
    */

	// entrada de dados
	printf("Digite seu nome: ");
	gets(nome);
	fflush(stdin);
	printf("Digite seu endereco: ");
	gets(endereco);
	fflush(stdin);
	printf("Digite o telefone: ");
	gets(telefone);
	fflush(stdin);
	printf("Digite o email: ");
	gets(email);
	fflush(stdin);
	
    /*
    %s se refere à string
    */

    // saída de dados
	printf("Nome: %s\n",nome);
	printf("Endereco: %s\n",endereco);
	printf("Telefone: %s\n",telefone);
	printf("Email: %s\n",email);
	
	return 0;
}