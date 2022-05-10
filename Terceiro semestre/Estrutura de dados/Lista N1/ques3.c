#include <stdio.h>
#include <stdlib.h>


void soma(int *a, int *b);
int diferenca(int *a, int *b);
void multiplicacao(int *a, int *b, int *r);

//main
int main(void){
    int n1, n2;

    printf("Digite n1: ");
    scanf("%i", &n1);
    printf("Digite n2: ");
    scanf("%i", &n2);

    soma(&n1, &n2);
    printf("Diferenca: %i\n", diferenca(&n1, &n2));
    int r;
    multiplicacao(&n1, &n2, &r);
    printf("Multiplicacao: %i\n", r);

    return 0;
}
void soma(int *a, int *b){
    printf("Soma: %i\n", (*a) + (*b));
}

int diferenca(int *a, int *b){
    return (*a)-(*b);
}

void multiplicacao(int *a, int *b, int *r){
    *r = (*a)*(*b);
}