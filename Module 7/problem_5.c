#include <stdio.h>
int main()
{

    int size, X, V;
    scanf("%d", &size);

    int numbers [size];
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &numbers[i]);
        scanf("%d %d", &X, &V);
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d \n %d %d", numbers[i], X, V);
    }
}