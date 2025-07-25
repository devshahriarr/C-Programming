#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int char_to_ascii(char character){
    
    // char character;
    if(character >= 'a' && character <= 'z'){
        int new_character = character;
        printf("%d", new_character);
        return new_character;
    }else{
        int new_character = character;
        return new_character;
        // printf("%c", character);
    }
}
int main(){
    char letter;
    scanf("%c", &letter);

    int capital_letter = char_to_ascii(letter);
    printf("%d", capital_letter);

    // if(character >= 'a' && character <= 'z'){
    //     character = character - 32;
    //     printf("%c", character);
    // }else{
    //     character = character + 32;
    //     printf("%c", character);
    // }
    return 0;
}