#include <stdio.h>
int main()
{
    int n, x;

    scanf("%d\n", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int pos = -1;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == x)
        {
            pos = i;
            break;
        }
    }
    printf("%d", pos);
}