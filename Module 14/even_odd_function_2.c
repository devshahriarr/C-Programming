#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

void evenOrOdd (){
    int num;
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("even");
    }else{
        printf("odd");
    }
    
}

int main(){
    
    evenOrOdd();
    return 0;
}