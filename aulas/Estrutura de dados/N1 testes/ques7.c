#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void convert(char *str);
 

int main (void){
	char str[30];
	
	printf("Digite uma palavra: ");
	gets(str);
	fflush(stdin);
	
    convert(&str);

	return 0;
}


void convert(char *str){
	int i = 0;
	while (str[i] != '\0'){
		if (isupper(str[i])){
			str[i] = str[i] - 32;
		}
		i++;
	}
	printf("%s\n", str);
   
}