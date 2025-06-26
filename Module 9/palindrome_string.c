#include <stdio.h>
#include <string.h>

int main() {
    char arr[100][100];
    int n, i, j, is_palindrome = 1;
    
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (strcmp(arr[i], arr[j]) != 0) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("The string array is a palindrome\n");
    } else {
        printf("The string array is not a palindrome\n");
    }
    
    return 0;
}