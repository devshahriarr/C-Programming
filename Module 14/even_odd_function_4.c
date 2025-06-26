#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int evenOrOdd (){
    int num;
    scanf("%d", &num);

    if (num%2==0)
    {
        printf("even");
    }else{
        printf("odd");
    }
    
    return 0;
}

int main(){
    
    evenOrOdd();
    return 0;
}