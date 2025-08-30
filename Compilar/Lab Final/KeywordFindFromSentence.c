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
void to_lowercase(char *str);

// function to check keyword or not
int is_keyword(const char *word) {
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // keyword found
        }
    }
    return 0; // not a keyword
}

// function for checking identifier
int is_identifier(const char *word) {
    
    if (!isalpha(word[0]) && word[0] != '_') {
        return 0;
    }
    
    for (int i = 1; word[i] != '\0'; i++) {
        if (!isalnum(word[i]) && word[i] != '_') {
            return 0;
        }
    }
    
    // if it's a keyword then it's not a identifier
    char temp[100];
    strcpy(temp, word);
    to_lowercase(temp);
    if (is_keyword(temp)) {
        return 0;
    }
    return 1;
}

// checking for constant (integer or floating)
int is_constant(const char *word) {
    int has_digit = 0;
    int has_dot = 0;
    int i = 0;

    // checking for negative value
    if (word[i] == '-') {
        i++;
    }

    // number checking
    while (word[i] != '\0') {
        if (isdigit(word[i])) {
            has_digit = 1;
        } else if (word[i] == '.' && has_dot == 0) {
            has_dot = 1; // only one floating point
        } else {
            return 0; // not a constant
        }
        i++;
    }
    return has_digit; // must be a digit
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
    // char *token = strtok(line, " \n\t");
    int found_keyword = 0;

    int keyword_count = 0;
    int token_count = 0;
    int identifier_count = 0;
    int constant_count = 0;

    printf("C keywords found in the sentence: ");


    char *token = strtok(line, " \n\t,;=+-*/{}()"); // add punctuation to the delimeter

    while (token != NULL) {
        token_count++;

        // convert each word to lowercase
        char temp[100];
        strcpy(temp, token);
        to_lowercase(temp);

        if (is_keyword(temp)) {
            printf("Keyword found: %s \n", token);
            found_keyword = 1;
            keyword_count++;
        } else if (is_identifier(token)) { // using original token for case storing
            printf("Identifier found: %s \n", token);
            identifier_count++;
        } else if (is_constant(token)) {
            printf("Constant found: %s \n", token);
            constant_count++;
        }

        token = strtok(NULL, " \n\t,;=+-*/{}()");
    }

    printf("\nTotal Token count: %d \n", token_count);
    printf("Total Keyword count: %d \n", keyword_count);
    printf("Total Identifier count: %d \n", identifier_count);
    printf("Total Constant count: %d \n", constant_count);

    if (!found_keyword) {
        printf("No C keywords found in the sentence.\n");
    }

    return 0;
}