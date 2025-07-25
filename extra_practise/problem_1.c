#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char word[100];
    int count;

    scanf("%s", &word);
    
    count = strlen(word);
    printf("%d", count);
    return 0;
}