#include <stdio.h>
int main()
{
    int n = 2, x;

    scanf("%d\n", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] <= 10)
        {
            printf("A[%d] = %d\n", i, numbers[i]);
        }
    }
}