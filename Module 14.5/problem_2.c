#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int value = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= value; j++)
        {
            printf("*");
        }
        printf("\n");
        value += 2;
        
    }
    
    return 0;
}