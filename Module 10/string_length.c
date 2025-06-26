#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    char str[50];
    scanf("%s", &str);
    printf("%s", str);
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        counter++;
    }
    printf("\n%d", counter);
    
    return 0;
}