// PROBLEMA: Faça um programa que agrupe três números em ordem crescente

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3;
  
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    fflush(stdin);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    fflush(stdin);
  
    if (n3 > n1){
        if (n1 > n2){
	    printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
	} else {
	    if (n2 < n3){
	        printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
	    }   
	}
    }
  
    if (n1 > n2){
        if (n2 > n3){
	    printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
    } else {
	    if (n3 < n1){
	        printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
	    }
	}
    }
  
    if (n1 < n2){
        if (n3 < n1){
	        printf("A ordem crescente: %d %d %d\n", n3, n1, n2);

	} else {
	    if (n3 < n2){
	        printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
	    }
	}  
    }

  return 0;
}