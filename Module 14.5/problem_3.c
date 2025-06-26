#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int value = 0;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= value; j++)
        {
            printf("*");
        }
        printf("\n");
        value += 2;
        space--;        
    }
    int value_2 = n*2 - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = value_2; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
        value_2 --;
        
    }
    
    
    return 0;
}