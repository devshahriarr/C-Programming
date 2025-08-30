#include <stdio.h>

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    
    int length = 0;
    // লুপ চালিয়ে নাল টার্মিনেটর পর্যন্ত গণনা
    while (word[length] != '\0') {
        length++;
    }
    
    printf("Length of the word '%s' is: %d\n", word, length);
    return 0;
}