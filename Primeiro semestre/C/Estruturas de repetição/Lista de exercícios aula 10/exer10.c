#include <stdio.h>
#include <stdlib.h>

int main (void){
	int base, exp, res, i = 0;

	printf("Digite o numero de base: ");
    scanf("%i",&base);
    fflush(stdin);

    printf("Digite o numero de expoente: ");
    scanf("%i",&exp);
    fflush(stdin);

	res = base;

    while (i < (exp - 1))
    {
        res*= base;
        i++;
    }
    

    /*
	for(i=0; i<(exp-1); i++) {
		res *= base;
	}
    */

	printf("O resultado eh: %i\n", res);
    
	return 0;
} 