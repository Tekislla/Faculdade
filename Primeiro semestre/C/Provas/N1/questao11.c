#include <stdio.h>
#include <stdlib.h>

int main(void){

    int B = 5;
    int A = 7;

    B+=A;
    printf("a) Valor de B neste ponto: %i \n \n", B);

    A*=1-A;
    B+=B-A;
    printf("b) Valor de A neste ponto: %i \n \n", A);

    B=51;
    A=A+B;
    printf("c) Valor de B neste ponto: %i \n \n", B);

    A=25+B;
    A+=B-A;
    printf("d) Valor de A neste ponto: %i \n \n", A);

    return 0;
}