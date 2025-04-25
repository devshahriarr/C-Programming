#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = INT_MAX, max = 0, temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
        printf("MAX: %d ", max);
        if (a[i] < min)
        {
            min = a[i];
        }
        printf("MIN: %d\n", min);
    }

    temp = max;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            a[i] = min;
        }
        else if (a[i] == min)
        {
            a[i] = temp;
        }

        printf("%d ", a[i]);
    }
}