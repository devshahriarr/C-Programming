#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char word[100];
    int count=0;

    fgets(word, sizeof(word),stdin);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] != ' ' && word[i] != '\n')
        {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}