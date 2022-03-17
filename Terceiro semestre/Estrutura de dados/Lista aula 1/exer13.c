#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void convert(char str[30]){
	int i;

	int tamanhoString = strlen(str);
    for(i = 0; i < tamanhoString; i++){
    	if (str[i] >= 'A' && str[i] <= 'Z'){                            
			str[i] = tolower(str[i]); 
		} else {
			str[i] = toupper(str[i]);
		}
	}
	
    printf("%s", str);
}
 

int main (void){
	char str[30];
	
	printf("Digite uma palavra: ");
	scanf("%s", str);
	fflush(stdin);
	
    convert(str);

	return 0;
}


