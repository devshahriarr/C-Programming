#include<stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n%d\n%d\n", A, B, C);
    // Print Minimum Number
    if(A <= B && A <= C){
        printf("%d ", A);
    }else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }else{
        printf("%d ", C);
    }
    // Print Maximum Number
    if(A >= B && A >= C){
        printf("%d", A);
    }else if (B >= A && B >= C)
    {
        printf("%d", B);
    }else{
        printf("%d", C);
    }
}