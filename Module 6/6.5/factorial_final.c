#include<stdio.h>
int main(){
    int X, N;
    scanf("%d", &X);
    for (int i = 0; i < X; i++)
    {
        scanf("%d", &N);
        int factorial = 1;
        if (N == 0)
        {
            factorial = 1;
        }else{
            for (int i = 1; i <= N; i++)
            {   
                factorial = factorial*i;
            }
        }
        printf("%d\n", factorial);
    }
    
    
    return 0;
}