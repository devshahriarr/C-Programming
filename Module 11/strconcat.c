#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    char a[101], b[101];

    scanf("%s %s", &a, &b);

    strcat(a, b);
    printf("%s ", a);
    return 0;
}