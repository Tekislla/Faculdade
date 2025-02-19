#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, tabuada, result, i;

    printf("Digite o numero o qual deseja ver a tabuada: ");
    scanf("%i",&num);
    fflush(stdin);

    /*
    while (i <= 10){
        result = num * i;
        printf("%i x %i = %i \n",num, i, result);
        i++;
        result = 0;
    }
    */

   for (i = 1; i <= 10; i++)
   {
       result = num * i;
       printf("%i x %i = %i \n",num, i, result);
       result = 0;
   }
   
    return 0;
}