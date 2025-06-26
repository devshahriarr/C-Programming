#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    char str[100001];
    scanf("%s", &str);
    printf("%s", str);
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            counter++;
        }
    }
    printf("\n%d", counter);

    return 0;
}