#include <stdio.h>
int main()
{
    int n;

    scanf("%d\n", &n);

    int numbers[n];
    int summation = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);
        summation = summation + numbers[i];
    }
    printf("%d", summation);
}