#include <stdio.h>
#include <string.h>
#include <ctype.h>

// all keyword of C
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "restrict", "return", "short",
    "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary"
};
const int num_keywords = 37; // total keyword

// function to check keyword or not
int is_keyword(const char *word) {
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // keyword found
        }
    }
    return 0; // not a keyword
}

// string to lowercase
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char line[1000];
    printf("Enter a sentence: \n");
    fgets(line, sizeof(line), stdin); // take input

    // remove new line
    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    // Separate word using strtok
    char *token = strtok(line, " \n\t");
    int found_keyword = 0;
    int keyword_count = 0;
    int token_count = 0;

    printf("C keywords found in the sentence: ");
    while (token != NULL) {
        token_count++;

        // convert each word to lowercase
        char temp[100];
        strcpy(temp, token);
        to_lowercase(temp);

        if (is_keyword(temp)) {
            printf("%s ", token);
            found_keyword = 1;
            keyword_count++;
        }
        
        token = strtok(NULL, " \n\t");
    }
    printf("\nTotal Token count: %d \n", token_count);
    printf("Total Keyword count: %d \n", keyword_count);

    if (!found_keyword) {
        printf("No C keywords found in the sentence.\n");
    }

    return 0;
}