#include<stdio.h>
#include<limits.h>
int main(){
    int N = 0, X = 0, max = INT_MIN;
    scanf("%d\n", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);
        
        if (X > max)
        {
            max = X;
        }
        
    }
    printf("%d",max);
}