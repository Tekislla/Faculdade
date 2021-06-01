#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 10;
    if (i%10 == 0){
        i=i+1;
    }else{
        i=i+4;
    }
    printf("%i", i);
    return 0;
}