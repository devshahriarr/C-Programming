#include<stdio.h>
int main(){
    int N, X;
    int positive = 0, negative = 0, even = 0, odd = 0;
    scanf("%d\n", &N);
    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);
        
        if (X%2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        
        if (X > 0)
        {
            positive++;
        }else if(X < 0){
            negative++;
        }
        
    }
    printf("Even: %d\n",even);
    printf("Odd:: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
}