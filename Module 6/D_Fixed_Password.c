#include<stdio.h>
int main(){
    int password;
    
    while (scanf("%d\n", &password))
    {
        
        if (password == 1999)
        {
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
        
    }
}