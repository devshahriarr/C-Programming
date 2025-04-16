#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N = 0;
    scanf("%d", &N);
    if(N%3 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}