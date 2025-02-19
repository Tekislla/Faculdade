/*
5. Faça um programa que leia uma data, passe para uma função 
que reajuste esta data em cinco dias.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
// prototipo 
void reajuste_data(int d, int m, int a);
int main(void){
    // variáveis locais
    int dia, mes, ano;
    // entrada de dados
    printf("Digite uma data (d/m/a): ");
    scanf("%i%*c%i%*c%i",&dia,&mes,&ano);
    fflush(stdin);
    // saída de dados
    printf("A data digitada e %i/%i/%i\n",dia, mes, ano);
    reajuste_data(dia, mes, ano);
    return 0;
}
void reajuste_data(int d, int m, int a){
    // processamento
    d+=5;
    if((d>31 && m == 1) || (d>31 && m == 3) || (d>31 && m == 5) || (d>31 && m == 7) ||
       (d>31 && m == 8) || (d>31 && m == 10) || (d>31 && m == 12)){
        d-=31;
        m++;
        if (m > 12){
            m=1;
            a++;
        }
    }else if ((d>30 && m == 4) || (d>30 && m == 6) || (d>30 && m == 9) || (d>30 && m == 11)){
        d-=30;
        m++;
    }else if ((d>29 && m==2) && ((a%4 == 0 || a%400 == 0) && a%100 !=0 )){
        d-=29;
        m++;
    }else if (d>28 && m==2){
        d-=28;
        m++;
    }
    printf("Nova da e %i/%i/%i\n",d,m,a);
}