#include <stdio.h>
#include <stdlib.h>

int main (void){
    char a = 'c', *pb, b = 'd';

    pb = &b;

    printf("A = %c\n", a);
    *pb = 'b';
    a = b;
    b++;
    printf("B = %c\n", b);
    b = 'm';
    printf("C = %c\n", *pb);
    b--;
    printf("D = %c\n", a);

    return 0;
}


