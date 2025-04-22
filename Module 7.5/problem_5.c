#include <stdio.h>
#include <limits.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];
    int min, index = 0;;

    min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] < min)
        {
            min = numbers[i];
            index = i;
        }
    }
    printf("%d %d", min, index);
}