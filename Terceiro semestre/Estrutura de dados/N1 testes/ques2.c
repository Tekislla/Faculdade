#include <stdio.h>
#include <stdlib.h>

int main (void){
    int B = 2;
    int A = 1;
    B += B *A;

    printf("a)%i\n", B);
    A++;
    B--;
    printf("b)%i\n", B);
    B -= 8;
    A *= (B % A) - 1;
    printf("c)%i\n", A);
    A -= A * B;
    B++;
    A = A / B + 1;
    printf("d)%i\n", A);

    return 0;
}