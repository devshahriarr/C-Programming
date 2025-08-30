#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    printf("Enter a line: \n");
    fgets(line, sizeof(line), stdin); // পুরো লাইন ইনপুট নেওয়া

    int word_count = 0;
    char *token = strtok(line, " \n\t"); // স্পেস, নিউলাইন, ট্যাব দিয়ে ভাগ করা

    while (token != NULL) {
        word_count++; // প্রতিটি টোকেন একটি শব্দ
        token = strtok(NULL, " \n\t"); // পরবর্তী টোকেন
    }

    printf("Number of words: %d\n", word_count);
    return 0;
}