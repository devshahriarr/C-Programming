#include<stdio.h>
int main(){
    long long A, B, C, D, X;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    // printf("%d\n%d\n%d\n%d\n", A, B, C, D);
    X = (A * B) - (C * D);
    printf("Difference = %lld", X);
}