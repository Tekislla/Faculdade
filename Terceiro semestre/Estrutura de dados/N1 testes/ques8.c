#include <stdio.h>

int calcPitagoras(int a);
 
int main (void){
	int pitTermo;

    printf("Digite o valor do termo: ");
    scanf("%i", &pitTermo);

    printf("%i", calcPitagoras(pitTermo));

    return 0;
}


int calcPitagoras(int a){
    if (a == 1){
        return 1;
    } else {
        return a + calcPitagoras(a - 1);
    }
}