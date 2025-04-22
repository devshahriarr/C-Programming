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
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == x)
        {
            printf("%d ", i);
        }else{
            printf("%d", -1);

        }
    }
}