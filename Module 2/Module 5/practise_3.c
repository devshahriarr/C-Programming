#include <stdio.h>
#include <math.h>

int main() {
    int X;
    scanf("%d", &X);

    int first_digit = X / 1000;
    
    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
    
    return 0;
}