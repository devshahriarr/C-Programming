#include <stdio.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] >= max)
        {
            max = numbers[i];
        }
    }
    printf("\n%d \n", max);
}