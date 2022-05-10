#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void convert(char *str);
 

int main (void){
	char str[30];
	
	printf("Digite um nome: ");
	gets(str);
	fflush(stdin);
	
    convert(&str);

	return 0;
}


void convert(char *str){
	int i = 0;
	while (str[i] != '\0'){
		if (islower(str[i])){
			str[0] = toupper(str[0]);
		}
		i++;
	}
	printf("%s\n", str);
   
}