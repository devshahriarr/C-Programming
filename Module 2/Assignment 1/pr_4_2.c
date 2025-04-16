#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int A = 0, B = 0;
    scanf("%d\n %d\n", &A, &B);
    if(A >=B){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}