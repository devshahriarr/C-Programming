#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    char a[101], b[101];

    scanf("%s %s", &a, &b);

    int length_a = strlen(a);
    int length = strlen(b);
    printf("%s ", a);
    for (int i = 0; i <= length; i++)
    {
        a[i+length_a] = b[i];
    }
    
    printf("\n%s ", a);
    return 0;
}