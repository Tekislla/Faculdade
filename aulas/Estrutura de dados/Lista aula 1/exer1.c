#include <stdio.h>
#include <stdlib.h>

int main(void){

    float n1, n2, n3, n4, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    fflush(stdin);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    fflush(stdin);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    fflush(stdin);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media das notas eh %.2f \n",media);

    return 0;
}
