#include<stdio.h>
int main(){
    char X;
    scanf("%c", &X);
    if (X == 'z') {
        printf("a");
    } else {
        X = X + 1;
        printf("%c", X);
    }
    return 0;
}