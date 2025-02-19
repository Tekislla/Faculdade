#include <stdio.h>
#include <stdio.h>

int main (void){  
    char nome[]={"joao"};
    int i;
    int numcaract = strlen(nome);
    

    int aux, j;
    for(i=1;i<numcaract;i++){
        for(j=0;j<numcaract-i;j++){
            if(nome[j]>nome[j+1]){
                aux=nome[j];
                nome[j]=nome[j+1];
                nome[j+1]=aux;
            }
        }
    }


    for(i=0;i<numcaract;i++){
        printf("%c",nome[i]);
    }

    return 0;
}