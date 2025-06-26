#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int a[n];
    int count_2 = 0, count_3 = 0;
    for (int i = 1; i <= n; i++)
    {

        scanf("%d\n", &a[n]);
        if (a[n] % 2 == 0)
        {
            count_2++;
        }
        else if (a[n] % 3 == 0)
        {
            count_3++;
        }
    }
    printf("%d %d", count_2, count_3);
    return 0;
}