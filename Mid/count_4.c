#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    int frequency[26] = {0};
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        frequency[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > 0)
        {
            char character = i + 'a';
            printf("%c - %d\n", character, frequency[i]);
        }
    }

    return 0;
}