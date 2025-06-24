#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int value = n*2 - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            /* code */
            // printf("%d", j);
            printf(" ");
        }
        for (int j = value; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
        value --;
        
    }
    
    return 0;
}