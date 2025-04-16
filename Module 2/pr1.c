#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c\n", &a, &b, &c, &d);
    // sum = a*b;
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.2f\n", c);
    printf("%c\n", d);
    // if(a%b == 0 || b%a == 0){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }
    return 0;
}
