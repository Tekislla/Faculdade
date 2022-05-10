#include <stdio.h>
#include <stdlib.h>

#define QTD 10

//dado estruturado(abstrato)
typedef struct animal{
    char raca[50], cor[50], sexo;
    float peso;
}Animal;

//main
int main(void){
    Animal bd[QTD];
    int i;

    for(i = 0; i < QTD; i++){
        printf("Digite raca: ");
        gets(bd[i].raca);
        fflush(stdin);

        printf("Digite cor: ");
        gets(bd[i].cor);
        fflush(stdin);

        printf("Digite sexo: ");
        scanf("%c", &bd[i].sexo);
        fflush(stdin);

        printf("Digite peso: ");
        scanf("%f", &bd[i].peso);
        fflush(stdin);
    }

    for(i = 0; i < QTD; i++){
        printf("%s\t%s\t%c\t%f\n",bd[i].raca, bd[i].cor, bd[i].sexo, bd[i].peso);
    }


    return 0;
}