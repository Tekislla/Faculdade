/*
4. Construa  um  algoritmo  que leia  um  vetor  de  10  caracteres,  e  diga  quantas consoantes foram lidas. Imprima as consoantes.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    // variáveis
    char c[10];
    int i, contador = 0;
    // entrada
    for(i=0;i<10;i++){
        printf("Digite o %i caracter: ",i+1);
        scanf("%c",&c[i]);
        fflush(stdin);
    }
    // processamento e saida
    printf("As consoantes sao: ");
    for(i=0;i<10;i++){
        if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')){
            if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U'){
                // vagais
            }else{
                contador=contador+1;
                printf("%c, ",c[i]);
            }
        }
    }
    printf("\nA quantidade de consoantes e %i\n",contador);
    return 0;
}