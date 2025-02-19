#include <stdio.h>

int q(char a[]);
int c(char a[], char b[]);

int main (void){
    char n1[] = "CANSI0", n2[] = "JAVA0";
    c(n1, n2);
    getch();
}

int q(char a[]){
    int i, cont = 0;
    for(i = 0; a[i] != '0'; i++){
        cont = cont + 1;
    }

    return cont;
}

int c(char a[], char b[]){
    int i, vali;
    if (q(a) != q(b)){
        for (i = 0; i < q(a); i++){
            if (a[i] != b[i]){
                printf("%c%c", a[i], b[i]);
                vali = 0;
            } else {
                printf("%c", a[i]);
                vali = 1;
                break;
            }
        }
    } else {
        printf("%c", b[i]);
        vali = 1;
    }
    return vali;
}