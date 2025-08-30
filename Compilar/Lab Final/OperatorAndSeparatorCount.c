#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);

    // নিউলাইন অপসারণ
    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    int comma_count = 0, semicolon_count = 0, parenthesis_count = 0, brace_count = 0, curly_brace_count = 0, colon_count = 0;
    int arithmetic_count = 0, assign_count = 0, relational_count = 0, logical_count = 0, bitwise_count = 0, member_count = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ',') {
            comma_count++;
        } else if (line[i] == ';') {
            semicolon_count++;
        } else if (line[i] == ':') {
            colon_count++;
        } else if (line[i] == '{' || line[i] == '}') {
            curly_brace_count++;
        } else if (line[i] == '(' || line[i] == ')') {
            parenthesis_count++;
        } else if (line[i] == '[' || line[i] == ']') {
            brace_count++;
        } else if (line[i] == '+' && line[i + 1] == '+') {
            arithmetic_count++; // ++
            i++; // পরবর্তী ক্যারেক্টার স্কিপ
        } else if (line[i] == '-' && line[i + 1] == '-') {
            arithmetic_count++; // --
            i++;
        } else if (line[i] == '+' && line[i + 1] == '=') {
            assign_count++; // +=
            i++;
        } else if (line[i] == '-' && line[i + 1] == '=') {
            assign_count++; // -=
            i++;
        } else if (line[i] == '*' && line[i + 1] == '=') {
            assign_count++; // *=
            i++;
        } else if (line[i] == '/' && line[i + 1] == '=') {
            assign_count++; // /=
            i++;
        } else if (line[i] == '%' && line[i + 1] == '=') {
            assign_count++; // %=
            i++;
        } else if (line[i] == '&' && line[i + 1] == '&') {
            logical_count++; // &&
            i++;
        } else if (line[i] == '|' && line[i + 1] == '|') {
            logical_count++; // ||
            i++;
        } else if (line[i] == '=' && line[i + 1] == '=') {
            relational_count++; // ==
            i++;
        } else if (line[i] == '!' && line[i + 1] == '=') {
            relational_count++; // !=
            i++;
        } else if (line[i] == '>' && line[i + 1] == '=') {
            relational_count++; // >=
            i++;
        } else if (line[i] == '<' && line[i + 1] == '=') {
            relational_count++; // <=
            i++;
        } else if (line[i] == '<' && line[i + 1] == '<') {
            bitwise_count++; // <<
            i++;
        } else if (line[i] == '>' && line[i + 1] == '>') {
            bitwise_count++; // >>
            i++;
        } else if (line[i] == '<' && line[i + 1] == '=') {
            assign_count++; // <<=
            i++;
        } else if (line[i] == '>' && line[i + 1] == '=') {
            assign_count++; // >>=
            i++;
        } else if (line[i] == '&' && line[i + 1] == '=') {
            assign_count++; // &=
            i++;
        } else if (line[i] == '|' && line[i + 1] == '=') {
            assign_count++; // |=
            i++;
        } else if (line[i] == '^' && line[i + 1] == '=') {
            assign_count++; // ^=
            i++;
        } else if (line[i] == '-' && line[i + 1] == '>') {
            member_count++; // ->
            i++;
        } else if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '%') {
            arithmetic_count++; // একক অ্যারিথমেটিক অপারেটর
        } else if (line[i] == '=') {
            assign_count++; // =
        } else if (line[i] == '>' || line[i] == '<') {
            relational_count++; // >, <
        } else if (line[i] == '!') {
            logical_count++; // !
        } else if (line[i] == '&' || line[i] == '|' || line[i] == '^' || line[i] == '~') {
            bitwise_count++; // &, |, ^, ~
        } else if (line[i] == '.') {
            member_count++; // .
        }
    }

    printf("Comma count: %d\n", comma_count);
    printf("Semicolon count: %d\n", semicolon_count);
    printf("Colon count: %d\n", colon_count);
    printf("Parenthesis count: %d\n", parenthesis_count);
    printf("Curly brace count: %d\n", curly_brace_count);
    printf("Square brace count: %d\n", brace_count);
    printf("Arithmetic operator count: %d\n", arithmetic_count);
    printf("Assignment operator count: %d\n", assign_count);
    printf("Relational operator count: %d\n", relational_count);
    printf("Logical operator count: %d\n", logical_count);
    printf("Bitwise operator count: %d\n", bitwise_count);
    printf("Member access operator count: %d\n", member_count);

    return 0;
}