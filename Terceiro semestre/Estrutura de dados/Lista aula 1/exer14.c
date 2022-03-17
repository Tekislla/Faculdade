#include <stdio.h>
#include <stdlib.h>
  
int fatorial(int n)
{
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

int main(){
   int num;

   do {
      printf("Digite um numero: ");
      scanf("%i", &num);
      fflush(stdin);
   } while (num == 0);

   printf("O fatorial de %i eh %i", num, fatorial(num));
   return 0;
}
