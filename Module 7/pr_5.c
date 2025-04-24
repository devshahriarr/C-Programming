#include <stdio.h>

int main() {
    int size, X, V;

    scanf("%d", &size);

    int numbers[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    

    scanf("%d %d", &X, &V);
    
    numbers[X] = V;
    
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}