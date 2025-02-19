#include <stdio.h>
#include <stdio.h>

int main (void){  
    int vet[10], aux, i, j;

    for(i = 0; i < 10; i++){
        printf("Digite o %i numero : ",i+1);
        scanf("%i",&vet[i]);
        fflush(stdin);
    }  
    
    for(i = 1; i < 10; i++){
        for(j = 0; j < 10-i; j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%i, ", vet[i]);
    }
    
    return 0;
}
