#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, val, idx;
    scanf("%d\n", &n);
    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d", a[i]);
    }
    
    return 0;
}