#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(i%5==0){
            printf("Yes %d\n", i);
        }
        printf("No %d\n", i);

    }    
    return 0;
}
