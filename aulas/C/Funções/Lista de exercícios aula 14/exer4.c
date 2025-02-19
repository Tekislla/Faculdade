/*
4. Faça  uma  função  que  receba  como  argumento  os  valores  dos  
lados  de  um triângulo,  a  função  deverá  retornar  
0  se  triângulo for  equilátero,  
1  se  for isósceles ou 
2 se for escaleno.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
// prototipo da função
int valida_triangulo(float a, float b, float c);
int main (void){
    // variável local
    float n1,n2,n3;
    // entrada
    printf("Digite o lado A: ");
    scanf("%f",&n1);
    fflush(stdin);
    printf("Digite o lado B: ");
    scanf("%f",&n2);
    fflush(stdin);
    printf("Digite o lado C: ");
    scanf("%f",&n3);
    fflush(stdin);
    // processamento // saída
    switch(valida_triangulo(n1,n2,n3)){
        case 0:
            printf("Triangulo equilatero\n");
            break;
        case 1:
            printf("Triangulo isosceles\n");
            break;
        case 2:
            printf("Triangulo escaleno\n");
            break;
        default:
            printf("Erro, nao e triangulo\n");
    }
    return 0;
}
// função valida triangulo
int valida_triangulo(float a, float b, float c){
    if(a==b && b==c){
        return 0;
    }else if(a==b || a==c || b==c){
        return 1;
    }else if(a+b>c && a+c>b && b+c>a){
        return 2;
    }else{
        return -1;
    }
}