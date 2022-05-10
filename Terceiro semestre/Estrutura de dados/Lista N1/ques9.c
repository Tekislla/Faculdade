#include <stdio.h>
#include <stdlib.h>

float media(int *a, int *b, int *c, int *d, int *e);

int main(void){
    int n1, n2, n3, n4, n5;

    printf("Digite n1: ");
    scanf("%i", &n1);
    printf("Digite n2: ");
    scanf("%i", &n2);
    printf("Digite n3: ");
    scanf("%i", &n3);
    printf("Digite n4: ");
    scanf("%i", &n4);
    printf("Digite n5: ");
    scanf("%i", &n5);
    
    printf("Media: %f\n", media(&n1, &n2, &n3, &n4, &n5));

    return 0;
}

float media(int *a, int *b, int *c, int *d, int *e){
    return (*a + *b + *c + *d + *e) / 5;
}

