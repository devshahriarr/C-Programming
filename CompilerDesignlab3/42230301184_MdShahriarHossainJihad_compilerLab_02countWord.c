#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000
int count_words(char *sentence){
    int count = 0;
    int in_word = 0;

    while(*sentence){
        if(*sentence == ' ' || *sentence == '\n' || *sentence == '\t'){
            in_word = 0;
        } else if(in_word == 0){
            in_word = 1;
            count++;
        }
        sentence++;
    }

    return count;
}

int main(){
    char sentence[MAX_LENGTH];

    printf("Enter a Sentence (max %d character): \n", MAX_LENGTH);
    fgets(sentence, MAX_LENGTH, stdin);

    int len = strlen(sentence);
    if(len > 0 && sentence[len - 1] == '\n'){
        sentence[len-1] = '\0';
    }

    int word_count = count_words(sentence);
    printf("number of words: %d\n", word_count);

    return 0;

}
