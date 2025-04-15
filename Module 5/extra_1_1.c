#include<stdio.h>
int main(){
    long long X, Y;
    scanf("%lld %lld", &X, &Y);
    // printf("%d\n%d\n%d\n%d\n", A, B, C, D);
    // X = (A * B) - (C * D);
    printf("%lld + %lld = %lld\n", X, Y, X+Y);
    printf("%lld * %lld = %lld\n", X, Y, X*Y);
    printf("%lld - %lld = %lld\n", X, Y, X-Y);
}