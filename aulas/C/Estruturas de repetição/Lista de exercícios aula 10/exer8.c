#include <stdio.h>
#include <stdlib.h>

int main (void){
    float pais1 = 80000, pais2 = 200000;
    int anos = 0;

   /*  
    while (pais1 <= pais2){
        pais1 = pais1 + (pais1 * 0.03);
        pais2 = pais2 + (pais2 * 0.015);
        anos++;
    }
    */
    
    for (anos = 0; pais1 <= pais2; anos++){
        pais1 = pais1 + (pais1 * 0.03);
        pais2 = pais2 + (pais2 * 0.015);
    }
    
    printf("Demoraria %i anos para o primeiro pais atingir a populacao do segundo. \n", anos);

    return 0;
}