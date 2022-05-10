#include <stdio.h>
#include <stdlib.h>

void agrupa(int *a, int *b, int *c);

int main(void){
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
  
    agrupa(&n1, &n2, &n3);
    
    return 0;
}

void agrupa(int *a, int *b, int *c){
    if (*c > *a){
        if (*a > *b){
	        printf("A ordem crescente: %d %d %d\n", *b, *a, *c);
        } else {
            if (*b < *c){
                printf("A ordem crescente: %d %d %d\n", *a, *b, *c);
            }   
        }
    }
  
    if (*a > *b){
        if (*b > *c){
	        printf("A ordem crescente: %d %d %d\n", *c, *b, *a);
        } else {
	        if (*c < *a){
	            printf("A ordem crescente: %d %d %d\n", *b, *c, *a);
	        }
	    }
    }
  
    if (*a < *b){
        if (*c < *a){
	        printf("A ordem crescente: %d %d %d\n", *c, *a, *b);
	    } else {
	        if (*c < *b){
	            printf("A ordem crescente: %d %d %d\n", *a, *c, *b);
	        }
	    }  
    }
}