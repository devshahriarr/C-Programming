#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        for (int j = n; j > i; j--)
        {
            /* code */
            // printf("%d", j);
            printf("* ");
        }
        printf("\n");
        // printf("%d", i);
        // printf("\n");
        
    }
    
    return 0;
}