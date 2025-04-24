#include <stdio.h>
int main()
{

    int size;
    scanf("%d", &size);

    int numbers [size];
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &numbers[i]);
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
}