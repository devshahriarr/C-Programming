#include <stdio.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] % 2 != 0)
        {
            counter++;
            printf("%d ", numbers[i]);
        }
    }
            printf("\n%d \n", counter);
}