#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int evenOrOdd (int x){
    if (x%2==0)
    {
        printf("even");
    }else{
        printf("odd");
    }
    
    return 0;
}

int main(){
    int num;
    scanf("%d", &num);
    evenOrOdd(num);
    return 0;
}