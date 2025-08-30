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

// string to lowercase
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

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
    
    // if it's a keyword then it's not an identifier
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

int main() {
    char line[1000];
    printf("Enter Your Input: \n");
    fgets(line, sizeof(line), stdin); // take input

    // remove new line
    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    // Operator and Separator Count
    int punctuation_count = 0, total_parenthesis_count = 0, operator_count = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ',') {
            punctuation_count++;
        } else if (line[i] == ';') {
            punctuation_count++;
        } else if (line[i] == ':') {
            punctuation_count++;
        } else if (line[i] == '{' || line[i] == '}') {
            total_parenthesis_count++;
        } else if (line[i] == '(' || line[i] == ')') {
            total_parenthesis_count++;
        } else if (line[i] == '[' || line[i] == ']') {
            total_parenthesis_count++;
        } else if (line[i] == '+' && line[i + 1] == '+') {
            operator_count++; // ++
            i++; // Double Operator Count (Next Character Skipp)
        } else if (line[i] == '-' && line[i + 1] == '-') {
            operator_count++; // --
            i++;
        } else if (line[i] == '+' && line[i + 1] == '=') {
            operator_count++; // +=
            i++;
        } else if (line[i] == '-' && line[i + 1] == '=') {
            operator_count++; // -=
            i++;
        } else if (line[i] == '*' && line[i + 1] == '=') {
            operator_count++; // *=
            i++;
        } else if (line[i] == '/' && line[i + 1] == '=') {
            operator_count++; // /=
            i++;
        } else if (line[i] == '%' && line[i + 1] == '=') {
            operator_count++; // %=
            i++;
        } else if (line[i] == '&' && line[i + 1] == '&') {
            operator_count++; // &&
            i++;
        } else if (line[i] == '|' && line[i + 1] == '|') {
            operator_count++; // ||
            i++;
        } else if (line[i] == '=' && line[i + 1] == '=') {
            operator_count++; // ==
            i++;
        } else if (line[i] == '!' && line[i + 1] == '=') {
            operator_count++; // !=
            i++;
        } else if (line[i] == '>' && line[i + 1] == '=') {
            operator_count++; // >=
            i++;
        } else if (line[i] == '<' && line[i + 1] == '=') {
            operator_count++; // <=
            i++;
        } else if (line[i] == '<' && line[i + 1] == '<') {
            operator_count++; // <<
            i++;
        } else if (line[i] == '>' && line[i + 1] == '>') {
            operator_count++; // >>
            i++;
        } else if (line[i] == '<' && line[i + 1] == '=') {
            operator_count++; // <<=
            i++;
        } else if (line[i] == '>' && line[i + 1] == '=') {
            operator_count++; // >>=
            i++;
        } else if (line[i] == '&' && line[i + 1] == '=') {
            operator_count++; // &=
            i++;
        } else if (line[i] == '|' && line[i + 1] == '=') {
            operator_count++; // |=
            i++;
        } else if (line[i] == '^' && line[i + 1] == '=') {
            operator_count++; // ^=
            i++;
        } else if (line[i] == '-' && line[i + 1] == '>') {
            operator_count++; // ->
            i++;
        } else if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '%') {
            operator_count++; // Single Operator Count
        } else if (line[i] == '=') {
            operator_count++; // =
        } else if (line[i] == '>' || line[i] == '<') {
            operator_count++; // >, <
        } else if (line[i] == '!') {
            operator_count++; // !
        } else if (line[i] == '&' || line[i] == '|' || line[i] == '^' || line[i] == '~') {
            operator_count++; // &, |, ^, ~
        } else if (line[i] == '.') {
            operator_count++; // .
        }
    }

    printf("Punctuation count: %d\n", punctuation_count);

    printf("Total Parenthesis count: %d\n", total_parenthesis_count);

    printf("Total operator count: %d\n", operator_count);

    // Set Counter for Keyword Identifier and Constant
    int token_count = 0;
    int keyword_count = 0;
    int identifier_count = 0;
    int constant_count = 0;

    // Arrays to store keywords, identifiers, and constants
    char keyword_list[1000] = "";
    char identifier_list[1000] = "";
    char constant_list[1000] = "";

    printf("\n\nKeyword, Identifier and Constant found\n\n");

    // Separate word using strtok
    char *token = strtok(line, " \n\t,;=+-*/{}()"); // add punctuation to the delimiter

    while (token != NULL) {
        token_count++;

        // convert each word to lowercase for keyword checking
        char temp[100];
        strcpy(temp, token);
        to_lowercase(temp);

        if (is_keyword(temp)) {
            keyword_count++;
            // Append to keyword_list
            if (keyword_list[0] != '\0') {
                strcat(keyword_list, ", ");
            }
            strcat(keyword_list, token);
        } else if (is_identifier(token)) {
            identifier_count++;
            // Append to identifier_list
            if (identifier_list[0] != '\0') {
                strcat(identifier_list, ", ");
            }
            strcat(identifier_list, token);
        } else if (is_constant(token)) {
            constant_count++;
            // Append to constant_list
            if (constant_list[0] != '\0') {
                strcat(constant_list, ", ");
            }
            strcat(constant_list, token);
        }

        token = strtok(NULL, " \n\t,;=+-*/{}()");
    }

    
    if (token_count > 0) {
        // printf("Total Token count: %d\n", token_count);

        if (keyword_count <= 0) {
            printf("No C keywords found in the given input.\n");
        }else{
            printf("Total Keyword count: %d\n", keyword_count);
            printf("Keywords: %s\n", keyword_list[0] != '\0' ? keyword_list : "None");
        }

        if (identifier_count <= 0) {
            printf("No Identifier found in the given input.\n");
        }else {
            printf("Total Identifier count: %d\n", identifier_count);
            printf("Identifiers: %s\n", identifier_list[0] != '\0' ? identifier_list : "None");
        }

        if (constant_count <= 0) {
            printf("No Constant found in the given input.\n");
        }else {
            printf("Total Constant count: %d\n", constant_count);
            printf("Constants: %s\n", constant_list[0] != '\0' ? constant_list : "None");
        }
    }else{
        printf("No Token Found");
    }

    

    return 0;
}