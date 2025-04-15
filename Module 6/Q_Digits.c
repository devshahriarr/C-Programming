#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int n;
        scanf("%d", &n);

        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}