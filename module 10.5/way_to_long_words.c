#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    char str[100001];
    int frequency[26] = {0};
    scanf("%s", str);
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        counter++;
    }

    printf("%d", counter);
    return 0;
}
