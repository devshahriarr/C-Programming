#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; 
    printf("Enter a word: ");
    scanf("%s", word); 
    int length = strlen(word); 
    printf("Length of the word '%s' is: %d\n", word, length);
    return 0;
}