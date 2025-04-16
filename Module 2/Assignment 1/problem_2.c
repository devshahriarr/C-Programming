#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    a = 0, b = 0;
    printf("%d\n", a);
    scanf("%d\n %d", &a, &b);
    long long int c;
    c = 0;
    printf("%d\n", a);
    printf("%d\n", b);
    c = (long long int)a * b;
    printf("%lld", c);
    return 0;
}