#include <stdio.h>
int main()
{
    int n, is_palindrome = 1;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1;

    while (i < j)
    {

        if (a[i] != a[j])
        {
            is_palindrome = 0;
            break;
        }

        i++, j--;
    }

    if (is_palindrome)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

}