#include <stdio.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];
    int min;

        min = numbers[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    printf("%d \n", min);
}