#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int X;
        int Y;
        int start, end;
        scanf("%d %d", &X, &Y);
        if (X >= Y)
        {
            start = Y;
            end = X;
        }
        else
        {
            start = X;
            end = Y;
        }

        int result = 0;
        for (int j = start + 1; j < end; j++)
        {
            if (j % 2 != 0)
            {
                result = result + j;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}