#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int freqnce[10] = {0};
    for (int i = 0; i < n; i++)
    {
        // freqnce[ a[i] ]++;

        int val = a[i];
        freqnce[val]++;
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d\n", i, freqnce[i]);
    }
    
    
    
    
    return 0;
}