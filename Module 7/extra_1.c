#include <stdio.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] % 2 == 0)
        {
            printf("%d ", numbers[i]);
        }
    }
}