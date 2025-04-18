#include <stdio.h>

int main() {
    int N;
    
    // Loop until scanf fails to read an integer (e.g., EOF)
    while (scanf("%d", &N) == 1) {
        // Check if input is within valid range (1 to 15)
        if (N < 0 || N > 15) {
            printf("Input out of range (1 to 15)\n");
            continue;
        }
        
        // Use long long to handle factorials up to 15!
        long long factorial = 1;
        
        // Calculate factorial (no need to check N == 0 since input is 1 to 15)
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        
        // Print the factorial
        printf("%lld\n", factorial);
    }
    
    return 0;
}