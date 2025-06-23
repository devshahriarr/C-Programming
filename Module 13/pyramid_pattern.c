#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int value = 0;
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
    
    return 0;
}