#include<stdio.h>
int main(){
    int N = 0;
    scanf("%d\n", &N);
    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {   
        factorial = factorial*i;
    }
        printf("Factorial  = %d", factorial);

    return 0;
}