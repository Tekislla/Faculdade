#include <stdio.h>

void XY(char *t);

int main (void){
    char a[] = {"CANSI"};
    int i;
    for (i = 1; i <= 4; i++){
        XY(a);
    }
    printf("%s", a);
    return 0;
}

void XY (char *t){
    int i;
    for(i = 1; i < 4; i++){
        t[i] = t[i+1];
    }

}

