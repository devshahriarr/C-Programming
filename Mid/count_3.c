#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[100001];
        scanf("%s", str);
        int counter = 0, counter_2 = 0, counter_3 = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                counter++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                counter_2++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                counter_3++;
            }
        }
        printf("%d %d %d \n", counter, counter_2, counter_3);
    }

    return 0;
}