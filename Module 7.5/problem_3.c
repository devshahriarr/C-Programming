#include <stdio.h>
int main()
{
    int n = 2, x;

    scanf("%d\n", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &numbers[i]);

        if (numbers[i] == 0)
        {
            numbers[i] = 0;
        }else if (numbers[i] > 0)
        {
            numbers[i] = 1;
        }
        
        else
        {
            numbers[i] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
}