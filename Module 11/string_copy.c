#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    char a[101], b[101];

    scanf("%s %s", &a, &b);
    printf("%s %s", a, b);

    int length = strlen(b);
    printf("\n%s ", a);
    for (int i = 0; i <= length; i++)
    {
        a[i] = b[i];
    }
    
    printf("\n%s ", a);
    return 0;
}