#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int value = 0;
    // int value_2 = n*2 - 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < space; j++)
        // for (int j = n; j > i; j--) //alternately can use also without space variable
        {
            /* code */
            // printf("%d", j);
            printf(" ");
            // printf("* ");
        // printf("\n");
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
            /* code */
            // printf("%d", j);
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