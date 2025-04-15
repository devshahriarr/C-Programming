#include<stdio.h>
int main(){
    char character;
    scanf("%c", &character);

    if(character >= '0' && character <= '9'){
        printf("IS DIGIT");
    }else{
        printf("ALPHA\n");
        if(character >= 'a' && character <= 'z'){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
}