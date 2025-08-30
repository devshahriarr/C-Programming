#include <stdio.h>

int main() {
    char line[1000];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin); // পুরো লাইন ইনপুট নেওয়া

    int word_count = 0;
    int i = 0;
    int in_word = 0; // শব্দের মধ্যে আছে কিনা তা ট্র্যাক করতে

    while (line[i] != '\0') {
        if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
            in_word = 0; // স্পেস পেলে শব্দ শেষ
        } else if (in_word == 0) {
            in_word = 1; // নতুন শব্দ শুরু
            word_count++;
        }
        i++;
    }

    printf("Number of words: %d\n", word_count);
    return 0;
}