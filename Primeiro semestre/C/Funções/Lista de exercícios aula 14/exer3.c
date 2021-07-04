/*
3. Fazer um programa que possibilite várias opções de cálculos a partir de um 
menu. O programa chamará a função correspondente a cada cálculo.
[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM
Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>

void funcaoA(void);
void funcaoB(void);
void funcaoC(void);
void funcaoD(void);
int main (void){
    char opcao;

    do{
        system("cls");
        printf("[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
        printf("[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
        printf("[ c ] S = 1000/1 - 997/2 + 994/3.........\n");
        printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n");
        printf("[ f ] FIM\n");
        printf("Digite uma opcao: ");
        scanf("%c",&opcao);
        fflush(stdin);

        switch (opcao){
        case 'a': case 'A':
            funcaoA();
            break;

        case 'b': case 'B':
            funcaoB();
            break;

        case 'c': case 'C':
            funcaoC();
            break;

        case 'd': case 'D':
            funcaoD();
            break;

        case 'f': case 'F':
            printf("Saindo...\n");
            break;
        
        default:
            printf("Erro, digite outra opção!");
            
            break;
        }

    } while (opcao != 'f' && opcao != 'F');
    

    return 0;
}

void funcaoA(void){
    int a, b;
    float s = 0;

    for (a = 1, b = 1; a <= 99, b <= 50; a+=2, b++){
        s += (float)a/b;
    }
    
    printf("S = 1/1 + 3/2 + 5/3+........+ 99/50 = %f\n",s);
    getch();
}

void funcaoB(void){
    int i;
    float s = 0;
   
    for(i=1;i<=10;i++){
        if(i%2 == 1){
            s+=(float)i/i;
        }else {
            s-=(float)i/i;
        }
    }
    
    printf("S = 1/1 - 2/2 + 3/3 -........- 10/10 = %f",s);
    getch();
}

void funcaoC(void){
    int a, b, cont = 1;
    float s = 0;

    for (a = 1000, b = 1; a >= 1, b <= 1000; a-=3, b++){
        if (b%2 == 1){
            s+=(float)a/b;
        }else {
            s-=(float)a/b;
        }
        if (cont == 20){
            break;
        }
        cont++;
    }
    
    printf("S = 1000/1 - 997/2 + 994/3......... = %f\n",s);
    getch();
}

void funcaoD(void){
    int a, b, cont = 1;
    float s = 0;

    for (a = 480, b = 10; a >= 1, b <= 480; a-=5, b++){
        if (b%2 == 0){
            s+=(float)a/b;
        }else {
            s-=(float)a/b;
        }
        if (cont == 20){
            break;
        }
        cont++;
    }
    
    printf("S = 480/10 - 475/11 + 470/12 - ....... = %f\n",s);
    getch();
}