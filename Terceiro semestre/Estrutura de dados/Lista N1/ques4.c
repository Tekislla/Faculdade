#include <stdio.h>
#include <stdlib.h>


int fatorial(int *a);

int main(void){
    int num;

    do {
        printf("Digite um numero: ");
        scanf("%i", &num);
        fflush(stdin);
    } while (num == 0);

    printf("O fatorial eh %i\n", fatorial(&num));

    return 0;
}

int fatorial(int *a){
    int i, f=1;

    for(i=*a; i >= 1; i--){
        f*= i;
    }
    return f;
}