#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num1, num2, cont;

    printf("Digite o primeiro numero: ");
    scanf("%i",&num1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%i",&num2);
    fflush(stdin);

    if(num1<num2){
        for(cont=num1+1;cont<num2;cont++){
            if(cont%2 == 0){
                printf("%i, ",cont);
            }   
    }
    }else{
        for(cont=num2+1;cont<num1;cont++){
         if(cont%2 == 0){
                printf("%i, ",cont);
            }
    }
    }

    return 0;
}