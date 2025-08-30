#include <stdio.h>
#include <string.h>
#include <ctype.h>

// C এর কীওয়ার্ড তালিকা
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "restrict", "return", "short",
    "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while", "_Bool", "_Complex", "_Imaginary"
};
const int num_keywords = 37;

// কীওয়ার্ড চেক ফাংশন
int is_keyword(const char *word) {
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

// আইডেন্টিফায়ার চেক ফাংশন
int is_identifier(const char *word) {
    // প্রথম অক্ষর অবশ্যই অক্ষর বা আন্ডারস্কোর হতে হবে
    if (!isalpha(word[0]) && word[0] != '_') {
        return 0;
    }
    // বাকি অক্ষরগুলো অক্ষর, সংখ্যা বা আন্ডারস্কোর হতে পারে
    for (int i = 1; word[i] != '\0'; i++) {
        if (!isalnum(word[i]) && word[i] != '_') {
            return 0;
        }
    }
    // কীওয়ার্ড হলে আইডেন্টিফায়ার নয়
    char temp[100];
    strcpy(temp, word);
    to_lowercase(temp);
    if (is_keyword(temp)) {
        return 0;
    }
    return 1;
}

// কনস্ট্যান্ট চেক ফাংশন (ইন্টিজার বা ফ্লোটিং-পয়েন্ট)
int is_constant(const char *word) {
    int has_digit = 0;
    int has_dot = 0;
    int i = 0;

    // নেগেটিভ সংখ্যার জন্য '-' চেক
    if (word[i] == '-') {
        i++;
    }

    // সংখ্যা চেক
    while (word[i] != '\0') {
        if (isdigit(word[i])) {
            has_digit = 1;
        } else if (word[i] == '.' && has_dot == 0) {
            has_dot = 1; // একটি দশমিক পয়েন্ট মাত্র
        } else {
            return 0; // অন্য কোনো অক্ষর থাকলে কনস্ট্যান্ট নয়
        }
        i++;
    }
    return has_digit; // অবশ্যই একটি সংখ্যা থাকতে হবে
}

// স্ট্রিংকে লোয়ারকেসে রূপান্তর
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char line[1000];
    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);

    // নিউলাইন অপসারণ
    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    int keyword_count = 0, identifier_count = 0, constant_count = 0;
    // ডিলিমিটারে অপারেটর এবং পাংচুয়েশন যোগ করা
    char *token = strtok(line, " \n\t,;=+-*/{}()");

    while (token != NULL) {
        char temp[100];
        strcpy(temp, token);
        to_lowercase(temp);

        if (is_keyword(temp)) {
            keyword_count++;
        } else if (is_identifier(token)) { // মূল টোকেন ব্যবহার, কারণ কেস সংরক্ষণ করতে হবে
            identifier_count++;
        } else if (is_constant(token)) {
            constant_count++;
        }

        token = strtok(NULL, " \n\t,;=+-*/{}()");
    }

    // আউটপুট
    printf("Number of keywords: %d\n", keyword_count);
    printf("Number of identifiers: %d\n", identifier_count);
    printf("Number of constants: %d\n", constant_count);

    if (keyword_count == 0 && identifier_count == 0 && constant_count == 0) {
        printf("No keywords, identifiers, or constants found in the sentence.\n");
    }

    return 0;
}