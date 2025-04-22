#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    char character = 'A';
    for (int i = 1; i <= n; i++)
    {


        for (int j = 0; j < i; j++)
        {
        printf("%c ", character + j);
            // printf("%d ", j);
        }
        printf("\n");    
    }

    
}