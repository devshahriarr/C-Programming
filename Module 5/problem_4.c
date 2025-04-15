#include<stdio.h>
int main(){
    char character;
    scanf("%c", &character);

    if(character >= 'a' && character <= 'z'){
        character = character - 32;
        printf("%c", character);
    }else{
        character = character + 32;
        printf("%c", character);
    }
}