#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int number[n];
    if (number[n] > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }
}